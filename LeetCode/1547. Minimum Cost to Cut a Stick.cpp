class Solution {
public:
    int minCost(int n, vector<int>& cuts) {

        cuts.push_back(n);
        cuts.push_back(0);
        sort(cuts.begin(), cuts.end());

        int c = cuts.size() - 2;

        vector<vector<int>> dp(c + 10, vector<int>(c + 10, 0));

        for (int i = c; i >= 1; i--) {
            for (int j = 1; j <= c; j++) {
                if (i > j)
                    continue;
                int Mini = INT_MAX;
                for (int ind = i; ind <= j; ind++) {
                    int cost = cuts[j + 1] - cuts[i - 1] + dp[i][ind - 1] +
                        dp[ind + 1][j];
                    Mini = min(Mini, cost);
                }
                dp[i][j] = Mini;
            }
        }

        return dp[1][c];
    }
};