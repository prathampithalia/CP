class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1)
            return 0;
        int n = nums.size(), ans = 0, p = 1, l = 0;
        int r = 0;
        while (r < n) {
            p *= nums[r];
            while (l < n && p >= k) {
                p /= nums[l++];
            }
            ans += (r - l + 1);
            r++;
        }

        return ans;
    }
};