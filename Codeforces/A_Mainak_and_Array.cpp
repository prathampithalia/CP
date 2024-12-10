



#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int A[n];
    int ind = 0, mini = 1e8;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int ans = A[0] - A[1];
    for (int i = 0; i < n; i++) {
        ans = max(ans, A[i] - A[0]);
        if (i + 1 < n)ans = max(ans, A[i] - A[i + 1]);

    }

    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, A[n - 1] - A[i]);
    }

    if (n == 1)ans = 0;
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
