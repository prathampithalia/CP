class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x = 0;
        for (int i = 0; i < nums.size(); i++) x ^= nums[i];


        int ans = 0;
        for (int i = 0; i < 30; i++) {
            if ((bool)(x & (1 << i)) != ((bool)(k & (1 << i))))ans++;
        }
        return ans;
    }
};