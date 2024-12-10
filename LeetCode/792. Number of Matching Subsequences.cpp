bool is_Subsequence(string subse, string word) {
    int j = 0;
    for (int i = 0; i < subse.size(); i++) {
        if (word[j] == subse[i])
            j++;
    }
    return (j == word.size()) ? true : false;
}

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt = 0;
        for (auto i : words) {
            if (is_Subsequence(s, i)) cnt++;
        }
        return cnt;
    }
};