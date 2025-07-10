class Solution {
public:
    bool possible(int mid, int threshold, vector<int>nums) {
        int sum = 0;
        for (auto i : nums) {
            sum += (i / mid);
            if (i % mid)sum++;

            if (sum > threshold) return false;
        }

        return true;

    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        int mid = (low + high) / 2;

        while (low < high) {
            if (possible(mid, threshold, nums)) {
                high = mid;
            }
            else low = mid + 1;
            mid = (low + high) >> 1;
        }

        return low;

    }
};