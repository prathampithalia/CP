#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    string a, b;cin >> a >> b;

    a += '0';
    b += '0';

    int ans = 0;
    for (int i = 0;i < n; i++) {
        if (a[i] != b[i]) {

            if (a[i + 1] == b[i + 1])ans++;
            else {
                if (a[i] == b[i + 1] && b[i] == a[i + 1]) {
                    ans++;
                    i++;
                }
                else ans++;
            }
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