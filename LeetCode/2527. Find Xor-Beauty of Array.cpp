class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans = nums[0], n = nums.size();
        for (int i = 1; i < n; i++) {
            ans = (ans ^ nums[i]);
        }
        return ans;
    }
};