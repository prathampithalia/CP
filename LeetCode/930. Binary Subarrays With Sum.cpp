class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int, int> mp;
        int tot = 0;
        int ans = 0;
        mp[0] = 1;
        for (int i = 0;i < nums.size(); i++) {
            tot += nums[i];
            if (mp.find(tot - goal) != mp.end()) {
                ans += mp[tot - goal];
            }
            mp[tot]++;
        }

        return ans;
    }
};