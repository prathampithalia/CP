#include<iostream>

using namespace std;
#define int long long

void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;

    if (a == c) {
        cout << a << ' ' << d << endl;
    }
    else {
        cout << a << ' ' << c << endl;
    }
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