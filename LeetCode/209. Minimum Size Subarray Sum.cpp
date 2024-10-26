class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int ans = INT_MAX;
        int tot = 0;
        //  SLIDING WINDOW

        while (r < n) {
            tot += nums[r];

            while (tot >= target) {
                ans = min(ans, r - l + 1);
                tot -= nums[l];
                l++;
            }
            r++;
        }

        if (ans == INT_MAX)
            return 0;

        return ans;
    }
};