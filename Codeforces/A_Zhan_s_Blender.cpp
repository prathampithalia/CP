#include<bits/stdc++.h>
using namespace std;

#define int long long 

void solve() {

    int n; cin >> n;
    int x, y; cin >> x >> y;

    if (y >= x) {
        cout << (n / x) + (bool)(n % x) << endl;
    }
    else {
        cout << (n / y) + (bool)(n % y) << endl;
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
    cin >> t;
    while (t--) {
        solve();
    }
}
