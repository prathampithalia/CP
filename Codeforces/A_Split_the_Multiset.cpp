#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {

    int n, k;
    cin >> n >> k;

    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    while (n >= 2) {

        n -= (k - 1);
        ans++;
    }

    cout << ans << endl;

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