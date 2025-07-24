#include <bits/stdc++.h>

using namespace std;
// #define int long long

const int M = 2e5 + 5;
// vector<int> adj[M];
vector<vector<int>> adj(M);
vector<int> vis(M, 0);

vector<int> bridges;

void DFS(int node) {
    vis[node] = 1;
    for (auto i : adj[node]) {
        if (!vis[i]) {
            DFS(i);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            bridges.push_back(i);
            DFS(i);
        }
    }
    cout << bridges.size() - 1 << endl;
    for (int i = 0; i < bridges.size() - 1; i++) {
        cout << bridges[i] << ' ' << bridges[i + 1] << endl;
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
