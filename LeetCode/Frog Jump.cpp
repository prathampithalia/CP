class Solution {
public:

    int tabulation(vector<int> a) {

        int n = a.size();
        vector<int> dp(n, INT_MAX);

        dp[0] = 0;

        for (int i = 1;i < n;i++) {
            dp[i] = min(dp[i], dp[i - 1] + abs(a[i] - a[i - 1]));
            if (i > 1)dp[i] = min(dp[i], dp[i - 2] + abs(a[i] - a[i - 2]));
        }

        return dp[n - 1];
    }

    int minCost(vector<int>& height) {
        // Code here

        return tabulation(height);

    }
};