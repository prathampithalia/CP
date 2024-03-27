class Solution {
public:
    int numberOfSubstrings(string s) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<int> ls{-1, -1, -1};
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            ls[s[i] - 'a'] = i;
            if (min({ls[0], ls[1], ls[2]}) != -1) {
                ans += (1 + min({ls[0], ls[1], ls[2]}));
            }
        }

        return ans;
    }
};