#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {

    // unordered_map<int, int> mp;
    set<int> mp;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        // mp[c]++;
        mp.insert(c);
    }

    cout << mp.size() << endl;
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