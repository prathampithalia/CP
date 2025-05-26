class Solution {
public:
    bool isPal(string s, int l, int r) {

        while (l < r) {
            if (s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }
    void helper(vector<vector<string>>& ans, string s, vector<string>& t, int ind) {

        if (ind == s.size()) {
            ans.push_back(t);
            return;
        }
        for (int i = ind; i < s.size(); i++) {
            if (isPal(s, ind, i)) {
                t.push_back(s.substr(ind, i - ind + 1));
                helper(ans, s, t, i + 1);
                t.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> t;

        helper(ans, s, t, 0);
        return ans;
    }
};