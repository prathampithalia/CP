struct DSU {
    vector<int> par, rnk, sz;
    int c;
    DSU(int n) : par(n + 1), rnk(n + 1, 0), sz(n + 1, 1), c(n) {
        for (int i = 1; i <= n; ++i) par[i] = i;
    }
    int find(int i) {
        return (par[i] == i ? i : (par[i] = find(par[i])));
    }
    bool same(int i, int j) {
        return find(i) == find(j);
    }
    int get_size(int i) {
        return sz[find(i)];
    }
    int count() {
        return c;    //connected components
    }
    int merge(int i, int j) {
        if ((i = find(i)) == (j = find(j))) return -1;
        else --c;
        if (rnk[i] > rnk[j]) swap(i, j);
        par[i] = j;
        sz[j] += sz[i];
        if (rnk[i] == rnk[j]) rnk[j]++;
        return j;
    }
};

class Solution {
public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>>& operators) {

        vector<vector<int>> vis(n, vector<int>(m, 0));
        DSU ds(n * m);
        vector<int>ans;
        int cnt = 0;
        for (auto i : operators) {
            int r = i[0];
            int c = i[1];

            if (vis[r][c] == 1) { ans.push_back(cnt); continue; }

            vis[r][c] = 1;
            cnt++;
            int dx[] = { -1,0,+1,0 };
            int dy[] = { 0,+1,0,-1 };

            for (int i = 0; i < 4; i++) {
                int X = dx[i] + r;
                int Y = dy[i] + c;

                if (X >= 0 && X < n && Y >= 0 && Y < m) {

                    if (vis[X][Y]) {
                        int curNode = r * m + c;
                        int adjNode = X * m + Y;
                        if (!ds.same(curNode, adjNode)) {
                            cnt--;
                            ds.merge(curNode, adjNode);
                        }
                    }

                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
