class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto i : nums) sum += i;

        if (sum & 1) return false;
        int n = sum / 2;
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (auto i : nums) {
            for (int j = n; j >= i; j--) {
                dp[j] = dp[j] || dp[j - i];
            }
        }

        return dp[n];


    }
};