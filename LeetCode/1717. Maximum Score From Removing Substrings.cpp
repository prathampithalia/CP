class Solution {
public:

    int solve(string& s, string pat, int points) {

        string S = "";
        // stack<char> t ;
        // No stack use for greedy as we want to return the string formed after removing pat
        // if stack is used , extra loop and reverse will be required
        int cnt = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (S.size() == 0) {
                S += s[i];
            }
            else {
                if (S.back() == pat[0] && s[i] == pat[1]) {
                    S.pop_back();
                    cnt += points;
                }
                else {
                    S += s[i];
                }
            }
        }
        s = S;
        return cnt;

    }

    int maximumGain(string s, int x, int y) {

        int n = s.size();
        // Greedy

        int ans = 0;
        if (x > y) {
            ans += solve(s, "ab", x);
            ans += solve(s, "ba", y);
        }
        else {
            ans += solve(s, "ba", y);
            ans += solve(s, "ab", x);
        }

        return ans;

    }
};