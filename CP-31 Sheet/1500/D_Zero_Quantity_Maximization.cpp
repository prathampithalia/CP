#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<long double> a(n), b(n);
    map<long double, int> mp;
    int ans = 0;
    for (int i = 0;i < n; i++)cin >> a[i];
    for (int i = 0;i < n; i++)cin >> b[i];

    int zero = 0;
    for (int i = 0;i < n; i++) {

        if (a[i] == 0) {
            if (b[i] == 0)zero++;
        }
        else {
            mp[-(b[i] / a[i])]++;
        }
    }


    for (auto i : mp)ans = max(ans, i.second);

    cout << ans + zero << endl;

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