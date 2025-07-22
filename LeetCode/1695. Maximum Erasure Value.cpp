class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int l = 0, r = 0, n = nums.size();
        int tot = 0;
        int ans = 0;
        while (r < n) {
            if (mp.find(nums[r]) != mp.end() && mp[nums[r]] >= l) {
                int R = mp[nums[r]];
                while (l <= R) {
                    tot -= nums[l];
                    l++;
                }
            }
            tot += nums[r];
            ans = max(ans, tot);
            mp[nums[r]] = r;
            r++;
        }
        return ans;
    }
};
