class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        int prod = 1;

        vector<int> ans(n, 1);
        ans[0] = 1;

        for (int i = 0; i < n - 1; i++) {
            prod *= nums[i];
            ans[i + 1] = prod;
        }
        prod = 1;

        for (int i = n - 1; i > 0; i--) {
            prod *= nums[i];
            ans[i - 1] *= prod;
        }

        return ans;
    }
};