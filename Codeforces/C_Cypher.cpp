#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++)cin >> v[i];
    int j = 0;
    while (j < n) {
        int x; cin >> x;
        string s;cin >> s;
        for (auto i : s) {
            if (i == 'D') {
                v[j]++;
                v[j] %= 10;
            }
            else {
                if (v[j] == 0) {
                    v[j] = 10;
                }
                v[j]--;
                v[j] %= 10;
            }
        }
        j++;
    }
    for (auto i : v)cout << i << ' ';
    cout << endl;
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