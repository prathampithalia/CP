class Solution {
public:
    int possibleStringCount(string word) {

        int ans = 0;
        for (int i = 0;i < word.size() - 1;i++) {
            ans += (word[i] == word[i + 1]);
        }

        return ans + 1;
    }
};