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

#define piii pair<pair<int,int> , int>


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

const int N = 3e5 + 5; ;
piii v[N];


bool comp(piii& a, piii& b) {

    if (a.fi.fi < b.fi.fi)return true;
    if (a.fi.fi > b.fi.fi)return false;

    return a.fi.se > b.fi.se;

}

void solve() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;

        v[i].fi.fi = l;
        v[i].fi.se = r;
        v[i].se = i + 1;
    }

    // Primarily by first.first in ascending order.
    // For equal first.first values, it will order by first.second in descending order

    sort(v, v + n, comp);

    // for (int i = 0;i < n; i++) {
    //     cout << v[i].fi.fi << ' ' << v[i].fi.se << ' ' << v[i].se << endl;
    // }

    set<pii> s;

    for (int i = 0; i < n;i++) {
        int cur = v[i].fi.se;
        pii p = { cur , 0 };

        auto lb = s.lower_bound(p);
        if (lb != s.end()) {
            cout << v[i].se << ' ' << lb->se;
            return;
        }
        s.insert({ cur , v[i].se });
    }

    cout << -1 << ' ' << -1;

}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

}
