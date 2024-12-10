class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> less, great;
        int cnt = 0, n = nums.size();

        for (int i = 0;i < n; i++) {
            if (nums[i] > pivot)great.push_back(nums[i]);
            else if (nums[i] < pivot) less.push_back(nums[i]);
            else cnt++;
        }

        while (cnt--) {
            less.push_back(pivot);
        }
        for (int i = 0; i < great.size(); i++) {
            less.push_back(great[i]);
        }

        return less;

    }
};