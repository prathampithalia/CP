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

#define piii pair<int,pair<int,int>>
class Solution {
public:
    int kruskalsMST(int V, vector<vector<int>>& edges) {
        // code here
        DSU ds(V);

        priority_queue<piii, vector<piii>, greater<piii>> pq;

        for (auto i : edges) {
            pq.push({ i[2] ,{i[0],i[1]} });
        }
        int tot = 0;
        while (!pq.empty()) {
            int wt = pq.top().first;
            int u = pq.top().second.first;
            int v = pq.top().second.second;
            pq.pop();

            if (!ds.same(u, v)) {
                ds.merge(u, v);
                tot += wt;
            }
        }

        return tot;
    }
};