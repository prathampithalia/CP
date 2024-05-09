class Solution {
public:
    vector<string> simplifiedFractions(int n) {

        vector<string> ans;
        for (int i = 1;i <= n;i++) {
            for (int j = i + 1;j <= n;j++) {
                if (__gcd(i, j) == 1) {
                    string k = to_string(i) + '/' + to_string(j);
                    ans.push_back(k);
                }
            }
        }

        return ans;
    }
};