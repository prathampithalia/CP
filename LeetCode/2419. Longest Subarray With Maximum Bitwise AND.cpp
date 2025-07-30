class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());

        int cnt = 1, ans = 1;
        for (int i = 0; i < n - 1; i++) {
            if (mx == nums[i] && nums[i] == nums[i + 1])
                cnt++;
            else {
                cnt = 1;
            }
            ans = max(ans, cnt);
        }

        return ans;
    }
};