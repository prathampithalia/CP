bool compf(pair<int, string> a, pair<int, string> b) {

    if (a.second.size() == b.second.size()) {
        return a.first < b.first;
    } else {
        return a.second.size() < b.second.size();
    }
}

class Solution {
public:
    string arrangeWords(string text) {

        int n = text.size();

        vector<pair<int, string>> v;
        string t = "";

        for (int i = 0; i < n; i++) {
            if (text[i] != ' ') {
                t += tolower(text[i]);
            }

            else {
                v.push_back({i, t});
                t = "";
            }
        }

        v.push_back({n, t});
        sort(v.begin(), v.end(), compf);

        string ans = "";

        for (auto i : v) {
            ans += i.second;
            ans += ' ';
        }

        ans.pop_back();
        char d = toupper(ans[0]);
        ans[0] = d;

        return ans;
    }
};