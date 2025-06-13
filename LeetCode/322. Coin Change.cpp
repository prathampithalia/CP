class Solution {
public:
    int memo(int ind, vector<vector<int>>& dp, vector<int> a, int t) {

        if (ind == 0) {
            if (t % a[ind] == 0)
                return t / a[ind];
            else
                return INT_MAX;
        }
        if (dp[ind][t] != -1) {
            return dp[ind][t];
        }
        int no = memo(ind - 1, dp, a, t);
        int yes = INT_MAX;
        if (a[ind] <= t) {
            yes = 1 + memo(ind, dp, a, t - a[ind]);
        }

        return dp[ind][t] = min(no, yes);
    }

    int tab(vector<int> a, int t) {

        int n = a.size();
        vector<vector<int>> dp(n, vector<int>(t + 1, 0));

        for (int i = 0; i <= t; i++) {
            if (i % a[0] == 0)
                dp[0][i] = i / a[0];
            else
                dp[0][i] = 1e9;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= t; j++) {

                int no = dp[i - 1][j];
                int yes = 1e9;
                if (a[i] <= j)
                    yes = 1 + dp[i][j - a[i]];

                dp[i][j] = min(no, yes);
            }
        }
        return dp[n - 1][t];
    }

    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        // int val = memo(n-1,dp ,coins , amount );
        int val = tab(coins, amount);

        if (val >= 1e9)
            return -1;

        return val;
    }
};