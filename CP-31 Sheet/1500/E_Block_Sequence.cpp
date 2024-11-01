#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++)cin >> v[i];

    vector<int> dp(n + 1, INT_MAX);

    dp[0] = 0;
    for (int i = 0; i < n;i++) {
        dp[i + 1] = min(dp[i + 1], dp[i] + 1);
        if (i + v[i] + 1 <= n) {
            dp[i + v[i] + 1] = min(dp[i], dp[i + 1 + v[i]]);
        }
    }

    cout << dp[n] << endl;

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