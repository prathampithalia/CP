#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    unordered_map<int, int> mp;
    int ans = 0, p = 0;
    mp[0]++;
    for (int i = 0; i < n;i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        p += v[i];
        if (mp.find(p) != mp.end()) {
            ans++;
            mp.clear();
            p = v[i];
            mp[0]++;
            mp[p]++;
        }
        else
            mp[p]++;
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