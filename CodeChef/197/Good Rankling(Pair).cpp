#include <bits/stdc++.h>
using namespace std;
// #define int long long

void solve() {
    int n;
    cin >> n;
    int m = n;
    int a = 1;
    cout << 2 << endl;

    while (n--) {
        cout << a << ' ';
        a++;
    }
    a = m;
    cout << endl;
    while (m--) {
        cout << a << ' ';
        a--;
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //   cin >> t;
    while (t--) {
        solve();
    }
}
