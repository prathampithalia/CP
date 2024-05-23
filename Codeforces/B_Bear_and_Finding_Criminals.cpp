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
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (n,0)); forr(i, n)forr(j, n) cin >> v[i][j];





signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a; cin >> n >> a;

    vector<int> v(n);
    forr(i, n) {
        cin >> v[i];
    }

    vector<int> t(n);
    a--;
    int ans = 0;
    if (v[a] != 0) {
        ans += v[a];
        t[a] = 1;
    }

    int mx = min(a, n - a - 1);

    for (int i = 1; i < n;i++) {
        if (a + i < n && a - i >= 0) {
            if (v[a + i] != 0 && v[a - i] != 0) {
                ans += v[a + i] + v[a - i];
                t[a + i] = 1;
                t[a - i] = 1;
            }
            if (v[a + i] == 0 && v[a - i] != 0) {
                v[a - i] = 0;
            }
            if (v[a + i] != 0 && v[a - i] == 0)
                v[a + i] = 0;

        }
        else break;
    }
    for (int i = 0; i < n; i++) {
        if (t[i] == 0 && v[i] != 0)
            ans += v[i];
        t[i] = 1;
    }

    cout << ans;

}