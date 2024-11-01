#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> v(n);

    // Logic , Decrement max and mini in one operation
    int tot = 0;
    for (int i = 0; i < n;i++) {
        cin >> v[i];
        tot += v[i];
    }
    if (tot & 1) {
        cout << "NO" << endl;
    }
    else {
        sort(v.begin(), v.end());
        int t = 0;
        for (int i = 0; i < n - 1;i++)t += v[i];

        cout << (v[n - 1] <= t ? "YES" : "NO") << endl;
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