class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string k = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ')
                k += s[i];
            else {
                v.push_back(k);
                k = "";
            }
        }

        v.push_back(k);

        string ans = "";
        for (int i = v.size() - 1; i >= 0; i--) {
            if (v[i].size()) {
                ans += v[i] + " ";
            }
        }
        ans.pop_back();
        return ans;
    }
};