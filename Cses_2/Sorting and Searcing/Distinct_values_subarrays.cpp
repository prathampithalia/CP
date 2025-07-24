#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<int, int> mp;
    int l = 0, r = 0;
    long long ans = 0;
    while (r < n) {
        mp[v[r]]++;
        while (mp[v[r]] > 1) {
            mp[v[l]]--;
            l++;
        }

        ans += (r - l + 1);
        r++;
    }
    cout << ans;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
