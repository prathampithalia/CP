class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> v;
        char ans;
        for (int i = 0; i < s.size(); i++) {
            v[s[i]]++;
            if (v[s[i]] == 2) {
                return s[i];
            }
        }
        return ' ';
    }
};