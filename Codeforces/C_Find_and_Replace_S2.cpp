#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    string s;cin >> s;

    map<char, vector<int>> mp;
    for (int i = 0; i < n; ++i) {
        mp[s[i]].push_back(i);
    }

    vector<int> vis(n);
    bool f = 1;
    vector<int> t(n);
    for (int i = 0;i < n; i++) {
        if (!vis[i]) {
            for (int j = 0; j < mp[s[i]].size(); j++) {
                int ind = mp[s[i]][j];
                t[ind] = f;
                vis[ind] = 1;
            }
        }
        f ^= 1;
    }
    bool ok = true;
    for (int i = 1; i < n; i++)if (t[i] == t[i - 1])ok = false;

    // for (auto i : t)cout << i;
    cout << (ok ? "YES" : "NO") << endl;

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