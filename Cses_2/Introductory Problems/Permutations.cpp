#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;

    if (n == 1) {
        cout << 1;
        return;
    }
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    }
    else {
        for (int i = 2; i <= n; i += 2)cout << i << ' ';
        for (int i = 1; i <= n; i += 2)cout << i << ' ';
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