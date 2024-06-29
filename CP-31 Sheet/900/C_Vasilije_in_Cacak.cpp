#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
    int n, k, x; cin >> n >> k >> x;

    int mx = (n * (n + 1)) / 2;

    if (mx < x)cout << "NO";
    else {
        int m1 = (k * (k + 1)) / 2;
        int m2 = mx - (n - k) * (n - k + 1) / 2;

        if (m1 <= x && x <= m2)cout << "YES";
        else cout << "NO";
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