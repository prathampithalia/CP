class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // unordered_map<int,int> mp;
        int n = grid.size();
        vector<int> mp(n * n + 1);

        for (auto i : grid) {
            for (auto j : i)
                mp[j]++;
        }
        vector<int> ans(2);
        for (int i = 1; i <= grid.size() * grid.size(); i++) {
            if (mp[i] == 0) {
                ans[1] = i;
            }
            if (mp[i] == 2) {
                ans[0] = i;
            }
        }
        return ans;
    }
};