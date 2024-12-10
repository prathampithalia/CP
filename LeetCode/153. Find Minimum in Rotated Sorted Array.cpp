class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int l = 0, r = n - 1;
        int mid = (l + r) >> 1;

        while (l < r) {
            if (nums[mid] > nums[r]) {
                l = mid + 1;
            }
            else {
                r = mid;
            }
            mid = (l + r) / 2;
        }

        return nums[l];
    }
};