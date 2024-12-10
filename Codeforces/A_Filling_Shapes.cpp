#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int A[n + 1];
    A[1] = 0;
    A[0] = 1;
    for (int i = 2; i <= n; i++) {
        A[i] = 2 * A[i - 2];
    }
    cout << A[n];
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