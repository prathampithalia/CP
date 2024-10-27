#include<bits/stdc++.h>

using namespace std;
// #define int long long

void solve() {
    int n; cin >> n;
    string s;
    cin >> s;

    for (int i = 1; i < n; i++) {
        if (s[i - 1] > s[i]) {
            cout << "YES" << endl;
            cout << i << ' ' << i + 1 << endl;
            return;
        }
    }

    cout << "NO";


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