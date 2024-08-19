#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {

    int a, b; cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
    }
    else if (a > b) {
        cout << (((a - b) & 1) ? 2 : 1) << endl;
    }
    else {
        cout << (((b - a) & 1) ? 1 : 2) << endl;
    }

}

signed main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}