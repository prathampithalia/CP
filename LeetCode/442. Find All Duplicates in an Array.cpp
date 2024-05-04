class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        unordered_map<int, int> v;
        vector<int> ans;

        for (auto i : nums) {
            v[i]++;

            if (v[i] == 2)
                ans.push_back(i);
        }
        return ans;
    }
};