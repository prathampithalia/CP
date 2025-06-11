class Solution {
public:

    int memo(int day, int last, vector<vector<int>>& arr, vector<vector<int>>& dp) {

        if (day == 0) {
            int mx = 0;
            for (int i = 0;i <= 2; i++) {
                if (i != last)
                    mx = max(mx, arr[day][i]);
            }
            return dp[day][last] = mx;
        }
        if (dp[day][last] != -1) return dp[day][last];

        int mx = 0;
        for (int i = 0;i <= 2; i++) {
            if (i != last) {
                int act = arr[day][i] + memo(day - 1, i, arr, dp);
                mx = max(mx, act);
            }
        }
        return dp[day][last] = mx;
    }

    int tab(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(3, 0));

        // base dp[0][]
        dp[0][0] = max(arr[0][1], arr[0][2]);
        dp[0][1] = max(arr[0][0], arr[0][2]);
        dp[0][2] = max(arr[0][1], arr[0][0]);


        for (int day = 1; day < n; day++) {
            for (int last = 0; last < 3; last++) {
                for (int ind = 0;ind < 3;ind++) {
                    if (ind != last)dp[day][last] = max(dp[day][last], arr[day][ind] + dp[day - 1][ind]);
                }
            }
        }
        return max({ dp[n - 1][0] ,dp[n - 1][1] ,dp[n - 1][2] });
    }

    int maximumPoints(vector<vector<int>>& arr) {
        // Code here
        int n = arr.size();

        // return memo(n-1 , 3 , arr ,dp);
        return tab(arr);

    }
};