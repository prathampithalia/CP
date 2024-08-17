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

#define int ll

umap<int, int> mp, mpcopy;

void helper(int start, vi& v, vi& a) {
    a.pb(v[start]);
    for (int i = 0;i < v.size();i++) {
        if (i != start) {
            int nxt = a.back() * 2;
            int nxt1 = a.back() / 3;
            if (mp.find(nxt) != mp.end()) {
                a.pb(nxt);
                mp.erase(nxt);
            }
            else if (mp.find(nxt1) != mp.end()) {
                a.pb(nxt1);
                mp.erase(nxt1);
            }
            else break;
        }
        // pvec(a) ce;
    }
}

void solve() {
    int n; cin >> n;
    vi v(n);

    forr(i, n) {
        cin >> v[i];
    }
    sort(all(v));
    forr(i, n) {
        mp[v[i]] = i;
        mpcopy[v[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        vi a;
        helper(i, v, a);
        if (a.size() == n) {
            pvec(a);
            break;
        }
        mp = mpcopy;
    }


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