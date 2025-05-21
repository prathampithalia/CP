class Solution {
public:

    int helper(vector<int> a, int sum) {

        int partitions = 1;
        int tot = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] + tot <= sum) {
                tot += a[i];
            }
            else {
                partitions++;
                tot = a[i];
            }
        }
        return partitions;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int mid = low + (high - low) / 2;

        while (low <= high) {

            if (helper(nums, mid) > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }

            mid = low + (high - low) / 2;
        }


        return low;
    }
};