#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int N; cin >> N;
    vector<int> v(N);

    int ans = 0;
    for (int i = 0;i < N; i++) {
        cin >> v[i];
        if (i) {
            ans = max(ans, v[i] * v[i - 1]);
        }
    }

    cout << ans << endl;

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