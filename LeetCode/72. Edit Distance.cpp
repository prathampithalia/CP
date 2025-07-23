class Solution {
public:
    int minDistance(string w1, string w2) {

        vector<vector<int>> dp(505, vector<int>(505, 0));
        int n = w1.size();
        int m = w2.size();

        for (int i = 0; i <= n; i++)
            dp[i][0] = i;
        for (int i = 0; i <= m; i++)
            dp[0][i] = i;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (w1[i - 1] == w2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] =
                        1 + min({ dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] });
                }
            }
        }

        return dp[n][m];
    }
};