bool isPal(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1])
            return false;
    }

    return true;
}

class Solution {

public:
    int countSubstrings(string s) {

        // BF : generating substrings
        // worked for n<=1000
        unordered_map<string, int> mp;
        int n = s.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            string k = "";
            for (int j = i; j < n; j++) {
                k += s[j];
                mp[k]++;
            }
        }
        for (auto i : mp) {
            if (isPal(i.first))
                ans += i.second;
        }
        return ans;
    }
};