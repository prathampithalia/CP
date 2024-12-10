#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    int m1 = 1e9 + 7, m2 = INT_MIN;
    k--;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m1 = min(m1, v[i]);
        m2 = max(m2, v[i]);
    }
    for (int i = 0;i < n; i++) {
        v[i] = (m2 - v[i]);
    }

    if (k & 1 && k > 0 && n != 1) {
        for (int i = 0;i < n; i++) {
            v[i] = ((m2 - m1) - v[i]);
        }
    }

    for (auto i : v)cout << i << ' ';

    cout << endl;
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