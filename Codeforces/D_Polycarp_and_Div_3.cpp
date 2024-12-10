#include<bits/stdc++.h>

using namespace std;
// #define int long long

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif


void solve() {

    string s; cin >> s;
    int n = s.size();

    // cuts such that maximum are divisble
    // we dont wont to make each cut divisible 

    vector<int> pref(n + 1), d(3, -1);
    d[0] = 0;
    int r = 0;
    for (int i = 1; i <= n; i++) {
        r = (r + s[i - 1] - '0') % 3;
        pref[i] = pref[i - 1];
        if (d[r] != -1)
            pref[i] = max(pref[i], pref[d[r]] + 1);
        d[r] = i;
        debug(r, pref, d);
    }

    cout << pref[n];

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