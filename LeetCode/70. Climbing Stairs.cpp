class Solution {
public:
    int tabulation(int n) {

        vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }

    int spaceOptimized(int n) {

        int prev = 1;
        int prev2 = 1;

        int cur = 0;
        for (int i = 2; i <= n; i++) {
            cur = prev + prev2;
            prev2 = prev;
            prev = cur;
        }

        return prev;
    }

    int climbStairs(int n) { return spaceOptimized(n); }
};