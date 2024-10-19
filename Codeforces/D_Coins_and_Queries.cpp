#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, k; cin >> n >> k;

    vector<int>  p(31);
    for (int i = 0; i < n;i++) {
        int x; cin >> x;
        //  0100 : 4 
        // returns number of trailing zeroes == ith power
        p[__builtin_ctz(x)]++;
    }

    while (k--) {
        int c; cin >> c;
        int ans = 0;
        for (int i = 30; i >= 0; i--) {
            int req = min(c >> i, p[i]);
            ans += req;
            c -= (req * (1 << i));
        }
        if (c)ans = -1;
        cout << ans << endl;
    }

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