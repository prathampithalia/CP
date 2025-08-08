#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int k, l1, l2, r1, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    int ans = 0;

    for (int p = 1; p <= r2; p *= k) {
        int L = max(l1, (l2 + p - 1) / p);
        int R = min(r2 / p, r1);
        if (R >= L) ans += (R - L + 1);
    }
    cout << ans << endl;
}

signed main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("/Users/ACER/Documents/nvim./input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
