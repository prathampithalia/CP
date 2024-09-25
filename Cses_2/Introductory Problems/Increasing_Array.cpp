#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    int ans = 0;
    int last = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (i == 0) {
            last = x;
        }
        else {
            if (x < last) {
                ans += (last - x);
            }
            else last = x;
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
    // cin >> t;
    while (t--) {
        solve();
    }
}