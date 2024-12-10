class Solution {
public:
    bool inc(vector<int> s) {

        for (int j = 0; j < s.size() - 1; j++) {
            if (s[j] > s[j + 1])
                return false;
        }

        return true;
    }

    void gen(int i, vector<int> v, vector<int> s, set<vector<int>>& ans) {
        if (i == v.size()) {

            if (s.size() > 1 && inc(s))
                ans.insert(s);

            return;
        }
        // picking
        s.push_back(v[i]);
        gen(i + 1, v, s, ans);
        // poping out while backtracking
        s.pop_back();
        gen(i + 1, v, s, ans);
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {

        set<vector<int>> ans;
        vector<int> s;
        gen(0, nums, s, ans);

        return vector(ans.begin(), ans.end());
    }
};