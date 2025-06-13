class Solution {
public:
    int memo(int ind, vector<vector<int>>& dp, vector<int> a, int t) {

        if (ind == 0) {
            if (t % a[ind] == 0)
                return t / a[ind];
            else
                return 0;
        }
        if (dp[ind][t] != -1) {
            return dp[ind][t];
        }
        int no = memo(ind - 1, dp, a, t);
        int yes = 0;
        if (a[ind] <= t) {
            yes = 1 + memo(ind, dp, a, t - a[ind]);
        }

        // return dp[ind][t] = min(no, yes);
        return dp[ind][t] = (no + yes);
    }


    int tab(vector<int> a, int t) {

        int n = a.size();
        vector<vector<unsigned long long >> dp(n, vector<unsigned long long >(t + 1, 0));

        for (int i = 0; i <= t; i++) {
            if (i % a[0] == 0)
                dp[0][i] = 1;
            else
                dp[0][i] = 0;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= t; j++) {

                unsigned long long no = dp[i - 1][j];
                unsigned long long yes = 0;
                if (a[i] <= j)
                    yes = dp[i][j - a[i]];

                // dp[i][j] = min(no, yes);
                dp[i][j] = no;
                dp[i][j] += yes;
            }
        }
        return dp[n - 1][t];
    }


    int spaceOptimized(vector<int> a, int d) {

        unordered_map<unsigned long long, int> dp;
        dp[0] = 1;

        for (int i = 0; i < a.size();i++) {
            for (int j = a[i]; j <= d; j++) {
                dp[j] += dp[j - a[i]];
            }
        }
        return dp[d];

    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, 0));
        // int val = memo(n-1,dp ,coins , amount );
        int val = tab(coins, amount);

        return val;
    }
};
