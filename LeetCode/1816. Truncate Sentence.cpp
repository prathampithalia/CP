class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> t;

        string p = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                p += s[i];
            } else {
                t.push_back(p);
                p = "";
            }
        }
        t.push_back(p);

        string ans = t[0];
        for (int i = 1; i < k; i++) {
            ans += ' ';
            ans += t[i];
        }

        return ans;
    }
};