#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif


void solve() {

    unordered_map<char, int> f;
    int n; cin >> n;
    string s; cin >> s;
    int mx = 0;
    for (auto i : s) {
        f[i]++;
        mx = max(mx, f[i]);
    }
    // Order of char will not change the answer
    // freq of char plays the key role
    if (mx > n / 2) {
        cout << n - (n - mx) * 2 << endl;
    }
    else cout << (n & 1) << endl;

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