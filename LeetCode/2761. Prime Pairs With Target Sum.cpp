class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<int> p;
        unordered_map<int, int> v;
        vector<bool> primes(n, 1);

        vector<vector<int>> ans;
        for (int i = 2; i < n; ++i) {
            if (primes[i]) {
                // ++ans;
                v[i] = 1;
                p.push_back(i);
                for (int j = i; j < n; j += i)
                    primes[j] = false;
            }
        }

        for (int i = 0; i < p.size(); i++) {

            if (v.find(n - p[i]) != v.end() && p[i] <= (n / 2)) {
                ans.push_back({p[i], n - p[i]});
            }
        }

        return ans;
    }
};