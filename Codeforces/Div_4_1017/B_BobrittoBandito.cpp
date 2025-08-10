// time-limit: 1000
// problem-url: https://codeforces.com/contest/2094/problem/B

#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    if (n == m) {
        cout << l << ' ' << r << endl;
        return;
    }
    int L = 0, R = 0;
    while (L > l && m > 0) {
        L--;
        m--;
    }
    while (m > 0 && R < r) {
        m--;
        R++;
    }
    cout << L << ' ' << R << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("/Users/ACER/Documents/nvim./input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
