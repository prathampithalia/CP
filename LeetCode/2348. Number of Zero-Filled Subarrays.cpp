class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        // vector<long long > z;
        long long cnt = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                cnt++;
            else {
                ans += (cnt * (cnt + 1)) / 2;
                // z.push_back(cnt);
                cnt = 0;
            }
        }

        if (cnt) {
            ans += (cnt * (cnt + 1)) / 2;
        }
        // z.push_back(cnt);

        return ans;
    }
};