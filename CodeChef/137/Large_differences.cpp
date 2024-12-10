#include<bits/stdc++.h>

using namespace std;

#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
#define ce cout << endl
#define forr(i, n) for (int i = 0; i < n; i++)
#define each(a, x) for (auto & a: x)
#define pvec(x) for (auto & a: x) { cout << a << " ";}
#define pvec2d(v) for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}
#define ppair(x) each(i, x) cout << i.first << " " << i.second << endl;

#define ll long long
#define MOD 1000000007
#define test_cases(T) int T; cin >> T; while (T--)
#define vec(v,n,int) vector<int> v(n) ; forr(i,n)cin>>v[i];
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (m,0)); forr(i, n)forr(j, m) cin >> v[i][j];





signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y) {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        vector<int> p;
        forr(i, n) {
            cin >> v[i];
            if (i != 0) {
                p.pb(abs(v[i] - v[i - 1]));
            }
        }
        if (n == 1) cout << max(v[0], k) << endl;
        else {
            int tot = accumulate(all(p), 0);
            int ans = tot;
            for (int i = 1; i < n - 1;i++) {
                ans = max({ ans, tot - abs(v[i - 1] - v[i]) - abs(v[i + 1] - v[i]) + abs(v[i - 1] - 1) + abs(v[i + 1] - 1) ,
                                tot - abs(v[i - 1] - v[i]) - abs(v[i + 1] - v[i]) + abs(v[i - 1] - k) + abs(v[i + 1] - k) });
            }

            ans = max({ ans, tot - abs(v[1] - v[0]) + abs(v[1] - 1),tot - abs(v[1] - v[0]) + abs(v[1] - k) });
            ans = max({ ans, tot - abs(v[n - 1] - v[n - 2]) + abs(v[n - 2] - 1),tot - abs(v[n - 1] - v[n - 2]) + abs(v[n - 2] - k) });
            cout << ans << endl;
        }
    }


}