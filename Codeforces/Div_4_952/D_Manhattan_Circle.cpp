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
        int n, m; cin >> n >> m;
        vec2d(v, n, m, char);

        int x1 = INT_MAX, x2 = 0, y1 = INT_MAX, y2 = 0;

        for (int r = 0; r < n; r++) {
            int cnt = 0;
            for (int c = 0; c < m; c++) {
                if (v[r][c] == '#') {
                    cnt++;
                }
            }
            if (cnt == 1) {
                x1 = min(x1, r);
                x2 = max(x2, r);
            }
        }

        for (int c = 0; c < m; c++) {
            int cnt = 0;
            for (int r = 0; r < n; r++) {
                if (v[r][c] == '#') {
                    cnt++;
                }
            }
            if (cnt == 1) {
                y1 = min(y1, c);
                y2 = max(y2, c);
            }
        }
        x1++;x2++, y1++, y2++;

        cout << (x1 + x2) / 2 << ' ' << (y1 + y2) / 2 << endl;
    }


}