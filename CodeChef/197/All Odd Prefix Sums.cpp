#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

#define pno cout << "NO" << endl
#define pyes cout << "YES" << endl

void solve() {
    int n;
    cin >> n;

    int even = 0, odd = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] & 1) odd++;
    }
    even = n - odd;
    if (odd == 1)
        pyes;
    else
        pno;
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
