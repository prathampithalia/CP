#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int a, b, n; cin >> a >> b >> n;
    vector<int> v(n);
    int ans = b;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ans += min(a - 1, v[i]);
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