class Solution {
public:
    bool isCircularSentence(string sentence) {
        bool ans = true;
        vector<string> s;
        int n = sentence.size();
        string k = "";
        for (int i = 0; i < n; i++) {
            if (sentence[i] != ' ') {
                k += sentence[i];
            }
            else {
                s.push_back(k);
                k = "";
            }
        }
        if (k.size())
            s.push_back(k);

        char st = s[0][0];
        if (s.size() == 1) {
            if (s[0].back() != s[0].front())
                return false;

            return true;
        }
        for (int i = 1; i < s.size(); i++) {

            if (s[i].front() != s[i - 1].back())
                ans = false;
            if (i == s.size() - 1) {
                if (s[i].back() != st)
                    ans = false;
            }
        }
        return ans;
    }
};