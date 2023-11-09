class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n = nums.size();
        int ans = -1;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i += 3) {
            if (i != 0 && nums[i] != nums[i - 1]) ans = nums[i];
        }
        if (n == 1) ans = nums[0];
        else if (n != 1 && ans == -1) ans = nums[0];

        return ans;

    }
};