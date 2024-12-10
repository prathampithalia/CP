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


void solve() {

    int n, q; cin >> n >> q;

    vector<vi> pref1(n + 1, vi(26, 0));
    vector<vi> pref2(n + 1, vi(26, 0));

    for (int i = 1; i <= n; i++) {
        char x; cin >> x;
        pref1[i][x - 'a']++;

        forr(j, 26) {
            pref1[i][j] += pref1[i - 1][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        char x; cin >> x;
        pref2[i][x - 'a']++;

        forr(j, 26) {
            pref2[i][j] += pref2[i - 1][j];
        }
    }

    while (q--) {
        int l, r; cin >> l >> r;

        l--;
        int cnt = 0;
        forr(i, 26) {
            int c1 = pref1[r][i] - pref1[l][i];
            int c2 = pref2[r][i] - pref2[l][i];

            cnt += abs(c1 - c2);
        }

        cout << cnt / 2 << endl;

    }

}



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(U)solve();


}
