#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {

    int n, m; cin >> n >> m;

    if (m == 0) {
        cout << n << endl;
        return;
    }

    int l = n - m, h = n + m;
    l = max(l, 0ll);

    int z = (l ^ h);
    int i = 32 - __builtin_clz(z);

    cout << (l | ((1 << i) - 1)) << endl;


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