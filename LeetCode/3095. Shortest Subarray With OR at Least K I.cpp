class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {

        int ans = INT_MAX, x = 0;
        int  n = nums.size();

        for (int i = 0; i < n; i++) {
            x = nums[i];
            if (x >= k) {
                ans = min(ans, 1);
            }
            for (int j = i + 1; j < n; j++) {
                x |= nums[j];
                if (x >= k) {
                    ans = min(ans, j - i + 1);
                }
            }
        }
        if (ans == INT_MAX) return -1;

        return ans;


    }
};