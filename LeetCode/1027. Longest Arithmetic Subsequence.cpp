class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            return n;
        }

        int ans = 2;
        vector<vector<int>> dp(n, vector<int>(2001, 1));
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int d = nums[i] - nums[j] + 1000;
                dp[i][d] = dp[j][d] + 1;

                ans = max(ans, dp[i][d]);
            }
        }
        return ans;
    }
};