class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (auto i : nums1)mp[i] = -1;
        for (auto i : nums2) {
            if (mp[i] == -1)mp[i] = 2;
            else if (mp[i] != 2) mp[i] = 1;
        }
        for (auto i : nums3)
        {
            if (mp[i] == -1) mp[i] = 3;
            if (mp[i] > 0) mp[i] = 3;

        }
        for (auto i : mp) {
            if (i.second > 1)ans.push_back(i.first);
        }

        return ans;
    }
};