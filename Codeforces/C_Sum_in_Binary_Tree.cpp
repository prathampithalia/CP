#include<iostream>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    int ans = 0;
    // bottom to top travel
    while (n) {
        ans += n;
        n /= 2LL;
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