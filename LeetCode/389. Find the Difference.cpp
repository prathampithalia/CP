class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char, int> v;

        for (int i = 0; i < t.size(); i++) {
            v[t[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            v[s[i]]--;
        }

        char ans;
        for (auto i : v) {
            if (i.second != 0)
                ans = i.first;
        }

        return ans;
    }
};