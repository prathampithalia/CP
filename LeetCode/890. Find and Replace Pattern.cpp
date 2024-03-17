class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<vector<int>> p;
        words.push_back(pattern);

        int n = words.size();

        for (int i = 0; i < n; i++) {
            vector<int> t;
            unordered_map<char, int> s;
            int pt = 0;
            for (int j = 0;j < words[i].size(); j++) {
                if (s.find(words[i][j]) == s.end()) {
                    s[words[i][j]] = pt;
                    pt++;
                    t.push_back(s[words[i][j]]);
                }
                else  t.push_back(s[words[i][j]]);
            }
            p.push_back(t);
        }
        vector<string> ans;
        for (int i = 0;i < n - 1;i++) {
            if (p[i] == p[p.size() - 1])
                ans.push_back(words[i]);
        }

        return ans;

    }
};