class Solution {
public:
    int edgeScore(vector<int>& edges) {

        int n = edges.size();
        vector<long long > mp(n + 1, 0);
        long long ans = 0, val = 0;
        for (int i = 0; i < n; i++) {
            mp[edges[i]] += i;
        }

        for (long long i = n - 1; i >= 0; i--) {
            // cout << i.first <<' '<<i.second<< endl;
            val = max(val, mp[i]);
            if (val == mp[i]) ans = i;
        }

        return ans;

    }
};