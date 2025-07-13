#include<bits/stdc++.h>

using namespace std;
#define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif



void solve() {
    int n, x, y;cin >> n >> x >> y;
    vector<int> v(n);
    for (int i = 0; i < n;i++) {
        cin >> v[i];
    }

    int ans = 0;
    map<pair<int, int>, int> mp;

    for (int i = 0;i < n;i++) {
        int X = v[i] % x;
        int Y = v[i] % y;
        if (mp.find({ (x - X) % x,Y }) != mp.end()) ans += mp[{(x - X) % x, Y}];
        mp[{X, Y}]++;
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