class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {

        int n = nums.size();
        if (n < 3)
            return 0;

        int ans = 0, cnt = 0;

        int dif = 0, prev_dif = nums[1] - nums[0];

        for (int i = 1; i < n - 1; i++) {
            dif = nums[i + 1] - nums[i];
            if (dif == prev_dif) {
                cnt++;
            }
            else {
                prev_dif = dif;
                cnt = 0;
            }

            ans += cnt;
        }
        return ans;
    }
};