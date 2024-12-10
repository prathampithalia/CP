#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, t; cin >> n >> t;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> mp;
    int sum = 0;
    int ans = 0;
    mp[0] = 1;
    for (int i = 0;i < n;i++) {
        sum += v[i];
        if (mp.find(sum - t) != mp.end())ans += mp[sum - t];
        mp[sum]++;
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