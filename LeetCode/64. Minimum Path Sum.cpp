int helper(int m, int n, vector<vector<int>> grid, vector<vector<int>>& dp) {
    if (m == 0 && n == 0)
        return grid[m][n];

    if (m < 0 || n < 0)
        return INT_MAX;

    if (dp[m][n] != -1)
        return dp[m][n];
    int left = helper(m, n - 1, grid, dp);
    int up = helper(m - 1, n, grid, dp);

    return dp[m][n] = grid[m][n] + min(left, up);
}

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        dp[0][0] = grid[0][0];
        for (int i = 1; i < m; i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (int i = 1; i < n; i++) {
            dp[0][i] = dp[0][i - 1] + grid[0][i];
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[m - 1][n - 1];
    }
};