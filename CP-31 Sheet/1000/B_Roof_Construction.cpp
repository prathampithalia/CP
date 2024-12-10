#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    int p = 1;
    while (p * 2 < n) {
        p *= 2;
    }
    for (int i = p - 1; i >= 0; i--) {
        cout << i << ' ';
    }
    for (int i = p; i < n; i++) {
        cout << i << ' ';
    }
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