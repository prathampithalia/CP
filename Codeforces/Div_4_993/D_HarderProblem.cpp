// time-limit: 2000
// problem-url: https://codeforces.com/contest/2044/problem/D

#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    set<int> unused;
    for (int i = 1; i <= n; i++) {
        unused.insert(i);
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        if (unused.count(v[i])) {
            unused.erase(v[i]);
            ans[i] = v[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (ans[i] == 0) {
            ans[i] = *unused.begin();
            unused.erase(unused.begin());
        }
    }
    for (auto i : ans) cout << i << ' ';

    cout << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("/Users/ACER/Documents/nvim/input.txt", "r", stdin);
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
