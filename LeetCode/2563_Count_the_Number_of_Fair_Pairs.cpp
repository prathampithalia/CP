class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {

        int l = 0, r = nums.size() - 1;
        long long int cnt = 0;

        sort(nums.begin(), nums.end());

        while (l < r) {
            if (nums[l] + nums[r] <= upper) {
                cnt += (r - l);
                l++;
            }
            else {
                r--;
            }

        }
        l = 0;
        r = nums.size() - 1;
        while (l < r) {
            if (nums[l] + nums[r] < lower) {
                cnt -= (r - l);
                l++;
            }
            else {
                r--;
            }

        }

        return cnt;

    }
};