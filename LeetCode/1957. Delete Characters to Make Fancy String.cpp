class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        map<char, int> mp;
        ans += s[0];
        mp[s[0]]++;
        int n = s.size();
        char  cur = ans[0], last = ans[0];
        for (int i = 1; i < n;i++) {
            mp[s[i]]++;
            if (last != s[i]) {
                mp[last] = 0;
            }
            if (mp[s[i]] <= 2) {
                ans += s[i];
                last = s[i];
            }
        }

        return ans;
    }
};

class Solution {
public:
    string makeFancyString(string s) {
        if (s.length() < 3) {
            return s;
        }
        int j = 2;
        for (int i = 2; i < s.size(); ++i)
            if (s[i] != s[j - 1] || s[i] != s[j - 2])
                s[j++] = s[i];
        s.resize(j);
        return s;
    }
};