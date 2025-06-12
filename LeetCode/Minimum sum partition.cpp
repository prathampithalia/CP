class Solution {

public:
    int minDifference(vector<int>& nums) {

        int n = nums.size();

        int sum = accumulate(nums.begin(), nums.end(), 0);

        vector<vector<int>> dp(n, vector<int>(sum + 1, 0));

        for (int i = 0; i < n;i++) {
            dp[i][0] = 1;
        }
        if (nums[0] <= sum)dp[0][nums[0]] = 1;


        for (int i = 1; i < n;i++) {
            for (int j = 0; j <= sum; j++) {
                int no = dp[i - 1][j];
                int yes = 0;
                if (nums[i] <= j) {
                    yes = dp[i - 1][j - nums[i]];
                }
                dp[i][j] = no || yes;
            }
        }
        int ans = INT_MAX;
        for (int i = 0; i <= sum / 2; i++) {
            if (dp[n - 1][i]) {
                int s2 = sum - i;
                ans = min(ans, abs(s2 - i));
            }
        }

        return ans;

    }
};
