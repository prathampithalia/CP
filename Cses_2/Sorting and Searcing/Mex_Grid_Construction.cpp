#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            set<int> s;
            for (int row = 0; row < j; row++) {
                s.insert(v[i][row]);
            }
            for (int col = 0; col < i; col++) {
                s.insert(v[col][j]);
            }
            int x = 0;
            while (s.count(x)) {
                x++;
            }
            v[i][j] = x;
        }
    }
    //    debug(v);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << v[i][j] << ' ';
        cout << endl;
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
