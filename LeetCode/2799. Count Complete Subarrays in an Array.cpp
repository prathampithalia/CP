class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> dis(nums.begin(), nums.end());
        int cnt = 0, left = 0;
        unordered_map<int, int> mp;
        for (int r = 0; r < n; r++) {
            mp[nums[r]]++;
            while (mp.size() == dis.size()) {
                cnt += n - r;
                mp[nums[left]]--;
                if (mp[nums[left]] == 0)
                    mp.erase(nums[left]);
                left++;
            }
        }
        return cnt;
    }
};