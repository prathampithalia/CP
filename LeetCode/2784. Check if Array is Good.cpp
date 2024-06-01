class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        int mx = n - 1;
        for (int i = 1; i < mx; i++) {
            if (mp[i] == 0 || mp[i] > 1) return false;
        }
        if (mp[mx] == 2) return true;
        return false;
    }
};