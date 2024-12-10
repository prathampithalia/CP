#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0;i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());
    int last = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].second >= last) {
            ans++;
            last = v[i].first;
        }
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