class Solution {
public:
    int maximumSwap(int num) {

        string s = to_string(num);

        // transverse from right to left
        int n = s.size();
        vector<int> d(n);
        iota(d.begin(), d.end(), 0);
        for (int i = n - 2; ~i; --i) {
            if (s[i] <= s[d[i + 1]]) {
                d[i] = d[i + 1];
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] < s[d[i]]) {
                swap(s[i], s[d[i]]);
                break;
            }
        }
        int ans = stoi(s);

        return ans;
    }
};