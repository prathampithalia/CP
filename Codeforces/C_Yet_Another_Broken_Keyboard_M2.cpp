#include<iostream>
#include<vector>

using namespace std;

#define int long long




void solve() {

    int n, k; cin >> n >> k;
    string s; cin >> s;

    vector<int> usable(26);
    for (int i = 0; i < k; i++) {
        char c; cin >> c;
        usable[c - 'a'] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (usable[s[i] - 'a'])s[i] = '1';
        else s[i] = '0';
    }

    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cnt++;
        }
        else {
            ans += (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }
    }
    ans += (cnt * (cnt + 1)) / 2;

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