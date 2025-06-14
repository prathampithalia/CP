class Solution {
public:
    int minimumTotal(vector<vector<int>>& tr) {

        int n = tr.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        dp[0][0] = tr[0][0];
        if (n == 1) return dp[0][0];
        int ans = INT_MAX;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                int up = 1e9, diag = 1e9;
                if (j < i) up = dp[i - 1][j];
                if (j - 1 >= 0) diag = dp[i - 1][j - 1];

                dp[i][j] = tr[i][j] + min(up, diag);
                if (i == n - 1)ans = min(ans, dp[i][j]);
            }
        }

        return ans;

    }
};