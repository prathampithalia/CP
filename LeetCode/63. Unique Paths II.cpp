class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {

        int dp[101][101];

        int m = arr.size();
        int n = arr[0].size();
        if (arr[m - 1][n - 1] == 1 || arr[0][0] == 1)
            return 0;

        dp[0][0] = 1;
        for (int i = 1; i < m; i++)
            dp[i][0] = (arr[i][0] == 0 && dp[i - 1][0] == 1) ? 1 : 0;

        for (int j = 1; j < n; j++)
            dp[0][j] = (arr[0][j] == 0 && dp[0][j - 1] == 1) ? 1 : 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // dp[i][0] = (arr[i][0] ? 0 : 1);
                // dp[0][j] = (arr[0][j] ? 0 : 1);
                if (i - 1 >= 0 && j - 1 >= 0) {
                    if (arr[i][j])
                        dp[i][j] = 0;
                    else
                        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }

        return dp[m - 1][n - 1];
    }
};
