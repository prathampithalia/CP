struct DSU {
    vector<int> par, rnk, sz;
    int c;
    DSU(int n) : par(n + 1), rnk(n + 1, 0), sz(n + 1, 1), c(n) {
        for (int i = 1; i <= n; ++i)
            par[i] = i;
    }
    int find(int i) { return (par[i] == i ? i : (par[i] = find(par[i]))); }
    bool same(int i, int j) { return find(i) == find(j); }
    int get_size(int i) { return sz[find(i)]; }
    int count() {
        return c; // connected components
    }
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
    int makeConnected(int n, vector<vector<int>>& a) {
        DSU ds(n);
        int extra = 0;
        for (int i = 0; i < a.size(); i++) {
            int u = a[i][0];
            int v = a[i][1];

            if (ds.same(u, v)) {
                extra++;
            }
            else
                ds.merge(u, v);
        }
        int comp = 0;
        for (int i = 0; i < n; i++) {
            if (ds.par[i] == i)
                comp++;
        }
        if (extra >= comp - 1)
            return comp - 1;

        return -1;
    }
};