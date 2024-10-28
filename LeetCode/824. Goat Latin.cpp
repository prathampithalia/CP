bool isvowel(char s) {
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') return true;
    else if (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') return true;

    return false;
}

class Solution {
public:
    string toGoatLatin(string sentence) {
        string ans = "";
        string k = "";
        vector<string> s;
        int n = sentence.size();
        for (int i = 0;i < n; i++) {
            if (sentence[i] != ' ') {
                k += sentence[i];
            }
            else {
                s.push_back(k);
                k = "";
            }
        }
        s.push_back(k);
        // for(auto i : s)cout << i << ',';
        string a = "";
        a += "aa";
        for (auto& i : s) {
            if (isvowel(i[0])) {
                ans += i + 'm' + a;
                ans += ' ';
            }
            else {
                for (int j = 1; j < i.size(); j++) {
                    ans += i[j];
                }
                ans += i[0];
                ans += 'm' + a + ' ';
            }
            a += 'a';
        }
        ans.pop_back();
        return ans;
    }
};