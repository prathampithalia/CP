bool possible(string word, string s) {

    int i = 0, j = 0;

    while (i < word.size() && j < s.size()) {

        if (word[i] != s[j])
            return false;

        int lenS = 0, lenWord = 0;
        int ch = s[j];

        while (j < s.size() && s[j] == ch) {
            lenS++;
            j++;
        }
        while (i < word.size() && word[i] == ch) {
            lenWord++;
            i++;
        }

        if (lenS < 3 && lenS != lenWord)
            return false;
        if (lenWord > lenS)
            return false;
    }
    return (i == word.size() && j == s.size());
}

class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {

        int ans = 0;

        for (auto word : words) {
            if (possible(word, s))
                ans++;
        }

        return ans;
    }
};