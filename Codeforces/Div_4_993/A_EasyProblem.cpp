// time-limit: 1000
// problem-url: https://codeforces.com/contest/2044/problem/A

#include <bits/stdc++.h>

using namespace std;
// #define int long long

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == n - j) cnt++;
        }
    }
    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
