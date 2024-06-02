class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int mx = 0, sum = nums[0];

        for (int i = 1; i < nums.size();i++) {
            if (nums[i - 1] + 1 == nums[i]) sum += nums[i];
            else break;
        }

        unordered_map<int, int> mp;
        for (auto i : nums)
            mp[i] = 1;
        for (int i = sum;; i++) {
            if (mp[i] == 0)
                return i;
        }
    }
};