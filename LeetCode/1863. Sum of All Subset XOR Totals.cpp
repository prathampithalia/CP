class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;

        for (int j = 0; j < (1 << n); j++) {
            int x = 0;
            for (int i = 0; i < n; i++) {
                if (j & (1 << i)) {
                    x ^= nums[i];
                }
            }
            ans += x;
        }
        return ans;
    }
};