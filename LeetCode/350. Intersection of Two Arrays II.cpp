class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> v;

        for (int i = 0; i < nums1.size(); i++) {
            v[nums1[i]]++;
        }

        vector<int> ans;

        for (int i = 0; i < nums2.size(); i++) {
            if (v.find(nums2[i]) != v.end() && v[nums2[i]] != 0) {
                ans.push_back(nums2[i]);
                v[nums2[i]]--;
            }
        }

        return ans;
    }
};