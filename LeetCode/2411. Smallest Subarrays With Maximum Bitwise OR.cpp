class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> near(32, -1);
        vector<int> ans(n, 1);
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < 32; j++) {
                if (nums[i] & (1 << j))
                    near[j] = i;
            }

            int last = i;
            for (int j = 0; j < 32; j++) {
                last = max(last, near[j]);
            }
            ans[i] = last - i + 1;
        }
        return ans;
    }
};