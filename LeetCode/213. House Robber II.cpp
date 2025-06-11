
class Solution {
public:
    int tabulation(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n + 1);

        dp[0] = nums[0];
        if (n == 1)
            return dp[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[n - 1];
    }

    int spaceOptimized(vector<int> nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        int prev2 = nums[0];
        int prev = max(nums[0], nums[1]);
        int cur = 0;

        for (int i = 2; i < n; i++) {
            cur = max(prev2 + nums[i], prev);
            prev2 = prev;
            prev = cur;
        }

        return prev;
    }

    int rob(vector<int>& nums) {

        vector<int> a1, a2;
        if (nums.size() == 1) return nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0)
                a1.push_back(nums[i]);
            if (i != nums.size() - 1)
                a2.push_back(nums[i]);
        }
        return max(spaceOptimized(a1), spaceOptimized(a2));
    }
};