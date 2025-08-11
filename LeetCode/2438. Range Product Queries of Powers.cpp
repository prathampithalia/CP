const int M = 1e9 + 7;
class Solution {
public:

    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<long long > powers;
        for (int i = 0; i < 32; i++) {
            if (n & (1LL << i))
                powers.push_back(1 << i);
        }

        vector<long long> p, prod;
        p.push_back(1);

        for (int i = 0; i < powers.size(); i++) {
            long long X = (p.back() % M * powers[i]);
            p.push_back(X);
        }
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            long long x = queries[i][0];
            long long y = queries[i][1];
            // ans.push_back(((p[y]) / p[x]%M));
            long long L = 1;
            for (int j = x; j <= y; j++) {
                L = (powers[j] % M * L) % M;
            }
            ans.push_back((int)L);
        }
        return ans;
    }
};