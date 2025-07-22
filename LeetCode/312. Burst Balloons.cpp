class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int len = 2; len < n; ++len) {
            for (int i = 0; i <= n - len - 1; ++i) {
                int j = i + len;
                for (int k = i + 1; k < j; ++k) {
                    int coins = dp[i][k] + dp[k][j] + nums[i] * nums[k] * nums[j];
                    if (coins > dp[i][j]) {
                        dp[i][j] = coins;
                    }
                }
            }
        }
        return dp[0][n - 1];
    }
};