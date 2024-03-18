class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int n = nums.size();

        int i = 0, j = 0, cnt = 0, ans = 0, zero = 0;
        bool ok = true;

        while (j < n) {
            j = i;
            // zero = 0 ;
            while (j < n) {
                if (nums[j] == 0) {
                    zero++;
                    ok = false;
                }
                if (zero == 2) {
                    zero = 0;
                    break;
                }
                j++;
                ans = max(ans, j - i - zero);
            }
            i++;
            // cout << j << ' ' << i << ' ' << ans << endl;
        }

        ans = max(ans, j - i);
        if (ok)
            ans--;

        return ans;
    }
};