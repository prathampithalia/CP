#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//#define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int mx = INT_MAX;
    int l = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = 0;

    int mid = l + (mx - l + 1) / 2;
    while (l < mx) {

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += max(mid - v[i], 0LL);
        }
        if (cnt <= k) {
            ans = max(ans, mid);
            l = mid;
        }
        if (cnt > k)mx = mid - 1;

        mid = l + (mx - l + 1) / 2;
    }

    cout << ans << endl;

}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
