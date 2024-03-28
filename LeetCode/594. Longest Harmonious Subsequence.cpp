class Solution {
public:
    int findLHS(vector<int>& nums) {

    ios_base::sync_with_stdio(0); cin.tie(0);

        sort(nums.begin(), nums.end());

        int ans = 0, l = 0, r = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[r] > 1) {
                r = l;
            }
            if (nums[i] != nums[i - 1])
                l = i;

            if (nums[i] - nums[r] == 1)
                ans = max(ans, i - r + 1);
        }
        return ans;
    }
};