class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);

        int m = s.size();
        if (n < 10)
            return n;

        int ind = -1;

        for (int i = m - 1; i > 0; i--) {
            if (s[i] < s[i - 1]) {
                s[i - 1] -= 1;
                ind = i;
            }
        }

        if (ind != -1)
            for (int i = ind; i < m; i++)
                s[i] = '9';
        return stoi(s);
    }
};