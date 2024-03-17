bool check(bitset<26> a, bitset<26> b) {
    for (int i = 0;i < 26;i++) {
        if ((a[i] & b[i]) == 1) return false;
    }
    return true;
}

class Solution {
public:
    int maxProduct(vector<string>& words) {

        int n = words.size();
        vector<bitset<26>> v(n);

        for (int i = 0; i < n;i++) {
            for (char j : words[i]) {
                v[i][j - 'a'] = 1;
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++)
            {
                if (check(v[i], v[j])) ans = max(ans, int(words[i].size() * words[j].size()));
            }
        }

        return ans;


    }
};