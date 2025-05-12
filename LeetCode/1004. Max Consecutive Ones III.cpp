class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int l = 0, r = 0, ans = 0, zero = 0;
        int n = nums.size();

        while (r < n) {
            zero += (nums[r] == 0);

            while (zero > k) {
                if (nums[l] == 0)
                    zero--;
                l++;
            }

            ans = max(ans, r - l + 1);

            r++;
        }
        return ans;
    }
};