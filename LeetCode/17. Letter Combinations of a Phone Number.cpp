class Solution {
public:
    void helper(vector<string> dialPad, vector<string>& ans, string s, string t,
        int ind) {
        if (ind == s.size()) {
            ans.push_back(t);
            return;
        }

        string val = dialPad[s[ind] - '0'];

        for (int i = 0; i < val.size(); i++) {
            t.push_back(val[i]);
            helper(dialPad, ans, s, t, ind + 1);
            t.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if (digits.size() == 0)
            return ans;
        vector<string> dialPad{ "",    "",    "abc",  "def", "ghi",
                               "jkl", "mno", "pqrs", "tuv", "wxyz" };

        string t;

        helper(dialPad, ans, digits, t, 0);

        return ans;
    }
};