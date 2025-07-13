#include<bits/stdc++.h>

using namespace std;
#define int long long



void solve() {

    int n, k; cin >> n >> k;

    vector<int> v(n);
    int tot = 0, cur = 0;
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }

    for (int i = 0; i < k; ++i)
        cur += v[i];

    tot = cur;
    for (int i = k; i < n; ++i)
    {
        cur += v[i] - v[i - k];
        tot += cur;
    }

    cout << fixed << setprecision(8) << double(tot) / (n - k + 1);
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