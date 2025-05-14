class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0;
        int cnt = 0;
        string ans;
        for (int i = 0; i < s.size();i++) {
            if (open == 0) {
                cnt += s[i] == '(' ? 1 : -1;
                open = 1;
            }
            else {
                cnt += s[i] == '(' ? 1 : -1;
                if (cnt) ans += s[i];

                else open = 0;
            }
        }

        return ans;
    }
};