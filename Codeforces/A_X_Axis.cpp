#include<iostream>
#include<vector>

using namespace std;
#define int long long

void solve() {
    int a, b, c; cin >> a >> b >> c;

    int A = 100;

    for (int i = 0; i < 11; i++) {
        A = min(A, abs(a - i) + abs(b - i) + abs(c - i));
    }

    cout << A << endl;


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