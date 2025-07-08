class Solution {
public:

    bool possible(int mid, vector<int> nums, int k) {

        int count = 0;
        for (int i = 0; i < nums.size(); i++) {

            int tot = (ceil(nums[i] / (double)mid) - 1);
            count += tot;

            if (count > k) return false;
        }
        return true;
    }

    int minimumSize(vector<int>& nums, int k) {

        int l = 1, r = 0;
        int n = nums.size();
        for (auto i : nums)r = max(i, r);
        int mid = (l + r) / 2;
        while (l < r) {
            if (possible(mid, nums, k)) {
                r = mid;
            }
            else {
                l = mid + 1;
            }
            mid = (l + r) / 2;
        }
        return r;
    }
};