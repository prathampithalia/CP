#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0;i < n;i++)cin >> a[i];

    int ans = 0;
    // | v - a[i] | <= x  
    // a[i]- x <= v <= a[i] + x

    int l = a[0], r = a[0];

    for (int i = 1; i < n; i++) {
        r = max(r, a[i]);
        l = min(l, a[i]);

        if (r - l > 2 * x) {
            ans++;
            l = a[i];
            r = a[i];
        }

    }

    cout << ans << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}