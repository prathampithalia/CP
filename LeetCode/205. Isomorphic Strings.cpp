class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, set<char>> mp1, mp2;

        int n = s.size();
        for (int i = 0; i < n; i++) {

            mp1[s[i]].insert(t[i]);
            mp2[t[i]].insert(s[i]);

        }

        bool ok1 = true, ok2 = true;
        for (auto i : s) {
            cout << mp2[i].size();
            if (mp1[i].size() > 1) {
                ok1 = false;
            }
            if (mp2[i].size() > 1)ok2 = false;
        }
        for (auto i : t) {
            cout << mp2[i].size();
            if (mp1[i].size() > 1) {
                ok1 = false;
            }
            if (mp2[i].size() > 1)ok2 = false;
        }
        if ((ok1 && ok2) == false) return false;
        return true;
    }
};