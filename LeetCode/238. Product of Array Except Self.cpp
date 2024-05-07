class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size(), z = 0;
        int prod = 1, pzero = 1, ind = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                z++;
                ind = i;
            }
            if (nums[i] != 0) {
                pzero *= nums[i];
            }
            prod *= nums[i];
        }

        vector<int> ans(n);
        if (z > 1)
            return ans;
        if (z == 1) {
            ans[ind] = pzero;
            return ans;
        }

        for (int i = 0; i < n; i++) {
            ans[i] = prod / nums[i];
        }

        return ans;
    }
};