#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    int A = INT_MIN, B = INT_MAX;
    for (int i = 0;i < n; i++) {
        int x; cin >> x;
        A = max(A, x);
        B = min(B, x);
    }
    cout << A - B << endl;
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