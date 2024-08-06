#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    string s; cin >> s;
    int n = s.size();

    int w = 0, o = 0;
    for (int i = 0; i < n;i++) {
        if (s[i] == s[i - 1] && s[i] == 'v')w++;
        if (s[i] == 'o')o++;
    }

    int take = 0;
    int ans = 0;
    for (int i = 0;i < n; i++) {

        if (s[i] == s[i - 1] && s[i] == 'v') {
            take++;
        }
        if (s[i] == 'o') {
            ans += (take * (w - take));
        }
    }

    cout << ans;
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