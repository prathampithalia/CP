class Solution {
public:
    string sortSentence(string s) {
        vector<string> v;

        string t = "";
        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ')
                t += s[i];
            else {
                v.push_back(t);
                t = "";
            }
        }

        v.push_back(t);

        vector<pair<int, string>> p;
        for (int i = 0; i < v.size(); i++) {
            int k = (v[i].back() - '0');

            v[i].pop_back();
            p.push_back({k, v[i]});
        }

        sort(p.begin(), p.end());

        string ans = "";

        for (int i = 0; i < p.size(); i++) {
            ans += p[i].second;
            ans += ' ';
        }

        ans.pop_back();

        return ans;
    }
};