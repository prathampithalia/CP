class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();

        // 0
        // 1 0
        // 2 1 0
        // 3 2 1 0
        // 4 3 2 1
        // 5 4 3 2
        // 6 5 4 3

        vector<int> dp(n + 1);
        for (int i = 1; i <= n; i++) {
            int maxSum = 0;
            int maxVal = 0;
            for (int j = 1; j <= k; j++) {
                if ((i - j) >= 0) {
                    maxVal = max(maxVal, arr[i - j]);
                    maxSum = max(maxSum, dp[i - j] + maxVal * j);
                }
            }
            dp[i] = maxSum;
        }
        return dp[n];
    }
};