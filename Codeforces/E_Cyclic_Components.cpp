#include<bits/stdc++.h>

using namespace std;

#define all(a)   a.begin(), a.end()
#define fi       first
#define se       second
#define pb       push_back
#define pyes     cout << "YES" << endl
#define pno      cout << "NO" << endl
#define ce       cout << endl
#define forr(i, n) for (int i = 0; i < n; i++)
#define each(a, x) for (auto & a: x)
#define pvec(x)    for (auto & a: x) { cout << a << " ";}
#define pvec2d(v)  for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}
#define ppair(x)   each(i, x) cout << i.first << " " << i.second << endl;

#define ll    long long
#define MOD   1000000007
#define vec(v,n,int)     vector<int> v(n) ; forr(i,n)cin>>v[i];
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (m,0)); forr(i, n)forr(j, m) cin >> v[i][j];
#define test_cases(T) int T; cin >> T; while (T--)

#define pii   pair<int,int>
#define vi    vector<int>
#define vpi   vector<pair<int,int>>
#define umap  unordered_map
#define maxpq(int) priority_queue<int>
#define minpq(int) priority_queue<int, vector<int>, greater<int> >

#define MIN(v)    *min_element(all(v))
#define MAX(v)    *max_element(all(v))
#define LB(c, x)  distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x)  distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

const int N = 2e5 + 5;
vector<int> a[N];
vector<int> vis(N), deg(N);
vector<int> cyc;


void dfs(int node) {
    vis[node] = 1;
    cyc.pb(node);
    for (auto i : a[node]) {
        if (!vis[i]) {
            dfs(i);
        }
    }
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    forr(i, m) {
        int u, v; cin >> u >> v;
        deg[u]++;
        deg[v]++;
        a[u].pb(v);
        a[v].pb(u);
    }


    int cnt = 0;

    for (int i = 1; i <= n; i++) {

        if (!vis[i]) {
            cyc.clear();

            dfs(i);
            bool ok = true;
            for (auto i : cyc) {
                ok &= (deg[i] == 2);
            }
            if (ok) cnt++;
        }
    }

    cout << cnt;

    // DSU
        // Find the nodes of each connected component (nodes having same DSU-parents) and push the nodes in a vector. One vector for each connected component.

        // Now for each connected component:

        // If it has p nodes and p+1 edges, then it is a cycle. In other words, each node of it must have an adjacency list of size to.
        // Else it is not a cycle.
        // https://codeforces.com/blog/entry/59281?#comment-914140

}
