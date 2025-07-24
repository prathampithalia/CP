#include <bits/stdc++.h>

#include <unordered_map>

using namespace std;
#define int long long

const int MOD = 1e9 + 7;

void solve() {
    int N;
    cin >> N;
    vector<int> v(N);
    unordered_map<int, int> mp;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    long long ans = 1;

    for (auto i : mp) {
        ans = (ans % MOD * (i.second + 1) % MOD) % MOD;
    }
    ans = (ans - 1) % MOD;

    cout << ans;
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
