class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {

        int ans = 2;

        for (int i = 0;i < k; i++) {
            vector<int> dp(k, 0);
            for (int num : nums) {
                int mod = num % k;
                int required = (i - mod + k) % k;
                dp[mod] = dp[required] + 1;
                ans = max(ans, dp[mod]);
            }
        }

        return ans;
    }
};