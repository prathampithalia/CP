class Solution {
public:
    void helper(vector<string>& a, string s, int n, int cnt, int num) {
        if (cnt == 0 && num == 2 * n) {
            a.push_back(s);
            return;
        }
        if (cnt < 0 || cnt > n || (cnt != 0 && num == 2 * n))
            return;

        helper(a, s + '(', n, cnt + 1, num + 1);
        helper(a, s + ')', n, cnt - 1, num + 1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        helper(ans, s, n, 0, 0);

        return ans;
    }
};