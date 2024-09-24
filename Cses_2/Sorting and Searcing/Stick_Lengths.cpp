#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++) {
        cin >> v[i];
    }
    int ans = 0;
    sort(v.begin(), v.end());
    for (int i = 0;i < n;i++) {
        ans += abs(v[i] - v[n / 2]);
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