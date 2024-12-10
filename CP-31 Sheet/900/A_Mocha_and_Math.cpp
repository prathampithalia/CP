#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int M = A[0];
    for (int i = 1; i < n; i++) {
        M &= A[i];
    }

    cout << M << endl;


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