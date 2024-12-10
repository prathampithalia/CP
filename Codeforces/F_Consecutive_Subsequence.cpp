#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    map<int, int> dp;
    int ans = 0, last = 0;
    int A[n];
    for (int i = 0;i < n;i++) {
        int x; cin >> x;
        A[i] = x;
        dp[x] = dp[x - 1] + 1;

        if (ans < dp[x]) {
            ans = dp[x];
            last = x;
        }
    }
    cout << ans << endl;
    vector<int> V;

    for (int i = n - 1; i >= 0;i--) {
        if (A[i] == last) {
            V.push_back(i + 1);
            last--;
        }
    }
    for (int i = V.size() - 1;i >= 0; i--) {
        cout << V[i] << ' ';
    }

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}