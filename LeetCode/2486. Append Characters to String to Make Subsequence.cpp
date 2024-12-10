class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0, n = s.size(), m = t.size();
        int cnt = 0;
        while (i < n) {

            if (s[i] == t[j]) {
                i++; j++;
            }
            else i++;

        }

        return m - j;
    }
};