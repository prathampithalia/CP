// time-limit: 1000
// problem-url: https://codeforces.com/contest/2044/problem/C

#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int r1 = 0, r2 = 0;
    int ans = 0;

    int l1 = 0, l2 = 0;

    r1 = min(a, m);
    r2 = min(b, m);

    if (r1 != m) {
        l1 = m - a;
    }
    if (r2 != m) {
        l2 = m - b;
    }
    ans = r1 + r2 + min(l2 + l1, c);

    cout << ans << endl;
}

signed main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
