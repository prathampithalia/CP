class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";

        map<char, int> mp;
        for (auto i : r1) {
            mp[i] = 1;
            mp[(char)(toupper(i))] = 1;
        }
        for (auto i : r2)
            mp[i] = 2, mp[(char)(toupper(i))] = 2;
        for (auto i : r3)
            mp[i] = 3, mp[(char)(toupper(i))] = 3;

        vector<string> ans;
        for (auto i : words) {
            set<int> one;
            for (auto j : i) {
                one.insert(mp[j]);
            }
            if (one.size() == 1)
                ans.push_back(i);
        }

        return ans;
    }
};