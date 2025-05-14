class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> s;
        int ind = -1;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                ind = i + 1;
                s.push(ch);
                break;
            }
            s.push(word[i]);
        }
        if (ind == -1) return word;
        string ans;
        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }
        if (ind < word.size())
            for (int i = ind; i < word.size(); i++) {
                ans += word[i];
            }

        return ans;
    }
};