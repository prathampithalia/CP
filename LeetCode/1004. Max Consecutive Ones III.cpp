class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int l = 0, r = 0, ans = 0, zero = 0;
        int n = nums.size();

        while (r < n) {
            if (nums[r] == 0) {
                zero++;
                if (zero > k) {
                    while (zero > k) {
                        if (nums[l] == 0)
                            zero--;

                        l++;
                    }
                }
            }
            if (zero <= k) {
                ans = max(ans, r - l + 1);
            }
            r++;
        }

        return ans;
    }
};