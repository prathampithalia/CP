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

#define int ll

#define pii pair<int,int> 

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<pair<int, int>> v[n + 1];
    vector<int> vis(n + 1);
    forr(i, m) {
        int a, b, w;cin >> a >> b >> w;
        v[a].pb({ w,b });
        v[b].pb({ w,a });
    }

    vector<int> dis(n + 1, LLONG_MAX), p(n + 1, -1);

    minpq(pii) pq;
    dis[1] = 0;

    pq.push({ 0,1 });

    while (!pq.empty()) {
        int d = pq.top().fi;
        int node = pq.top().se;
        pq.pop();

        vis[node] = 1;
        for (auto i : v[node]) {
            int w = i.fi;
            int n1 = i.se;
            if (w + d < dis[n1]) {
                dis[n1] = w + d;
                p[n1] = node;
                pq.push({ w + d , n1 });
            }
        }

    }

    if (dis[n] == LLONG_MAX) {
        cout << -1;
    }
    else
    {
        vector<int> path;
        // pvec(p)
        path.pb(n);
        int x = n;
        while (p[x] != -1) {
            path.pb(p[x]);
            x = p[x];
        }
        reverse(all(path));

        pvec(path);
    }

}