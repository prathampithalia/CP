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

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vi v(n), p(n);

    umap<int, int> mp;

    forr(i, n) {
        cin >> v[i];
        mp[v[i]]++;
        if (i == 0) {
            p[i] = v[i];
        }
        else p[i] = p[i - 1] + v[i];
    }


    vi ans;

    for (int i = 0;i < n; i++) {
        int x = (p[n - 1] - v[i]);
        if ((x % 2 == 0) && mp.find(x / 2) != mp.end()) {
            if (v[i] == x / 2 && mp[x / 2] > 1)ans.pb(i + 1);
            else if (v[i] != x / 2)ans.pb(i + 1);
        }
    }

    cout << ans.size() << endl;

    pvec(ans);



}