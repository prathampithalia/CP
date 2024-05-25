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



#define int ll 

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;

    string s; cin >> s;

    vector<int> pos, a(26);
    forr(i, n) {
        a[s[i] - 'a'] = 1;
    }
    unordered_map<int, char> mp;
    forr(i, m) {
        char x; cin >> x;
        mp[x - 'a'] = x;
    }
    forr(i, 26) {
        if (mp.find(i) == mp.end())a[i] = 0;
    }
    forr(i, n) {
        if (mp.find(s[i] - 'a') == mp.end())pos.pb(i);
    }
    int ans = 0;
    for (int i = 0;i < pos.size();i++) {
        int x = pos[i];
        if (i == 0) {
            ans += (x * (x + 1)) / 2;
        }
        if (i == pos.size() - 1) {
            int ls = n - pos[i] - 1;

            ans += (ls * (ls + 1)) / 2;

        }
        else {
            x = pos[i + 1] - pos[i] - 1;
            ans += (x * (x + 1)) / 2;

        }
    }
    if (pos.size() == 0) ans += (n * (n + 1)) / 2;
    cout << ans;

}