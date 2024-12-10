class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        string ans = " ";
        int ln = 0;
        if (n == 1) {
            return s;
        }
        for (int i = 1; i <= n - 1; i++) {
            // odd
            int l = i - 1, r = i + 1;
            string L = "", R = "";
            while (l >= 0 && r < n) {
                if (s[l] == s[r]) {
                    L += s[l];
                    R += s[r];
                }
                else
                    break;
                l--;
                r++;
            }
            ln = max(ln, 2 * (int)L.size() + 1);
            if (ln == 2 * L.size() + 1) {
                reverse(L.begin(), L.end());

                ans = L + s[i] + R;
            }
            // even
            l = i - 1, r = i;
            string L1 = "", R1 = "";
            while (l >= 0 && r < n) {
                if (s[l] == s[r]) {
                    L1 += s[l];
                    R1 += s[r];
                }
                else
                    break;
                l--;
                r++;
            }
            ln = max(ln, 2 * (int)L1.size());
            if (ln == (2 * L1.size())) {
                reverse(L1.begin(), L1.end());
                ans = L1 + R1;
            }
        }
        return ans;
    }
};