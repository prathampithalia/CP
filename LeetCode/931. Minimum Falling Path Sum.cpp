class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& tr) {
        int n = tr.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        if (n == 1) return tr[0][0];
        for (int i = 0; i < n;i++)dp[0][i] = tr[0][i];

        int ans = INT_MAX;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int up = 1e9, left = 1e9, right = 1e9;

                if (j > 0)left = dp[i - 1][j - 1];
                if (j + 1 < n)right = dp[i - 1][j + 1];
                up = dp[i - 1][j];

                dp[i][j] = tr[i][j] + min({ up,right ,left });

                if (i == n - 1)ans = min(ans, dp[i][j]);
            }
        }

        return ans;

    }
};