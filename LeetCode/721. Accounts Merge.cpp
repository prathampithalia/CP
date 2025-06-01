struct DSU {
    vector<int> par, rnk, sz;
    int c;
    DSU(int n) : par(n + 1), rnk(n + 1, 0), sz(n + 1, 1), c(n) {
        for (int i = 0; i <= n; ++i)
            par[i] = i;
    }
    int find(int i) { return (par[i] == i ? i : (par[i] = find(par[i]))); }
    bool same(int i, int j) { return find(i) == find(j); }
    int get_size(int i) { return sz[find(i)]; }
    int count() { return c; }
    int merge(int i, int j) {
        if ((i = find(i)) == (j = find(j)))
            return -1;
        else
            --c;
        if (rnk[i] > rnk[j])
            swap(i, j);
        par[i] = j;
        sz[j] += sz[i];
        if (rnk[i] == rnk[j])
            rnk[j]++;
        return j;
    }
};
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& acc) {

        int n = acc.size();
        DSU ds(n);

        vector<vector<string>> temp(n);
        unordered_map<string, int> mp;
        for (int i = 0; i < acc.size(); i++) {
            for (int j = 1; j < acc[i].size(); j++) {
                if (mp.find(acc[i][j]) == mp.end()) {
                    mp[acc[i][j]] = i;
                }
                else {
                    ds.merge(i, mp[acc[i][j]]);
                }
            }
        }
        for (auto i : mp) {
            int ind = ds.find(i.second);
            string key = i.first;
            if (temp[ind].size() == 0) {
                temp[ind].push_back(acc[ind][0]);
            }
            temp[ind].push_back(key);
        }

        vector<vector<string>> ans;
        for (auto& i : temp) {
            if (i.size()) {
                sort(i.begin() + 1, i.end());
                ans.push_back(i);
            }
        }
        return ans;
    }
};