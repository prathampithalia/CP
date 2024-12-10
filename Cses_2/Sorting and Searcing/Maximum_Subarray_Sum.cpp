#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n; i++) {
        cin >> v[i];
    }

    int ans = v[0], sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        ans = max(ans, sum);
        sum = max(sum, 0LL);
    }
    cout << ans;
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