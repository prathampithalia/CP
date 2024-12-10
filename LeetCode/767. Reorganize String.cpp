
bool chk(string ans) {
    for (int i = 0; i < ans.size() - 1; i++) {
        if (ans[i] == ans[i + 1])
            return false;
    }
    return true;
}

class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {

                for (int j = i + 1; j < n; j++) {
                    if (s[i + 1] != s[j]) {
                        swap(s[i + 1], s[j]);
                        break;
                    }
                }
            }
        }
        // if (chk(s)) {
        reverse(s.begin(), s.end());
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {

                for (int j = i + 1; j < n; j++) {
                    if (s[i + 1] != s[j]) {
                        swap(s[i + 1], s[j]);
                        break;
                    }
                }
            }
        }
        // }
        if (chk(s))
            return s;

        return "";
    }
};