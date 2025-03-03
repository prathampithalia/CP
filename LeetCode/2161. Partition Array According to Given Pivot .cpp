class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        int n = nums.size();
        vector<int> a, t(n);

        int p = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot)a.push_back(nums[i]);
            if (nums[i] == pivot)p++;
        }
        while (p--)a.push_back(pivot);
        for (int i = 0; i < n; i++) {
            if (nums[i] > pivot)a.push_back(nums[i]);
        }

        return a;
    }
};