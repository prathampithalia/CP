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
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;
        DSU ds(N);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0)
                    continue;
                int dx[] = { -1, 0, +1, 0 };
                int dy[] = { 0, +1, 0, -1 };
                int conn = i * n + j;
                for (int k = 0; k < 4; k++) {
                    int nx = dx[k] + i;
                    int ny = dy[k] + j;
                    if (nx >= 0 && ny >= 0 && ny < n && nx < n) {
                        if (grid[nx][ny]) {
                            int joiner = nx * n + ny;
                            // if (!ds.same(conn, joiner)) {
                            ds.merge(conn, joiner);
                            // }
                        }
                    }
                }
            }
        }
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1)
                    continue;
                int dx[] = { -1, 0, +1, 0 };
                int dy[] = { 0, +1, 0, -1 };
                set<int> comp;
                for (int k = 0; k < 4; k++) {
                    int nx = dx[k] + i;
                    int ny = dy[k] + j;
                    if (nx >= 0 && ny >= 0 && ny < n && nx < n) {
                        if (grid[nx][ny]) {
                            int joiner = nx * n + ny;
                            comp.insert(ds.find(joiner));
                        }
                    }
                }
                int sz = 0;
                for (auto x : comp) {
                    sz += ds.get_size(x);
                }
                ans = max(ans, sz + 1);
            }
        }
        for (int i = 0; i < N; i++) {
            int sz = ds.get_size(ds.find(i));
            ans = max(ans, sz);
        }
        return ans;
    }
};