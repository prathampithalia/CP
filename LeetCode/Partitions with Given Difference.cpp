class Solution {
public:

    int tab(vector<int>& arr, int d) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(d + 1, 0));

        if (arr[0] == 0) dp[0][0] = 2;
        else dp[0][0] = 1;

        if (arr[0] != 0 && arr[0] <= d) dp[0][arr[0]] = 1;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= d; j++) {
                int no = dp[i - 1][j];
                int yes = 0;
                if (j - arr[i] >= 0) {
                    yes = dp[i - 1][j - arr[i]];
                }
                dp[i][j] = no + yes;
            }
        }
        return dp[n - 1][d];

    }

    int countPartitions(vector<int>& arr, int d) {

        int tot = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)tot += arr[i];

        if (tot - d < 0 || (tot - d) % 2) return 0;


        return tab(arr, (tot - d) / 2);


    }
};