class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int n = nums.size(), l = 0, r = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0 && nums[i] <= threshold) {
                int m = 0;
                for (int j = i; j < n; j++) {
                    if (m % 2) {
                        if (nums[j] % 2 && nums[j] <= threshold) {
                            ans = max(ans, j - i + 1);
                        } else
                            break;
                    } else {
                        if (nums[j] % 2 == 0 && nums[j] <= threshold) {
                            ans = max(ans, j - i + 1);
                        } else
                            break;
                    }
                    m++;
                }
            }
        }

        return ans;
    }
};