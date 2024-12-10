#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int  n; cin >> n;
    vector<int> v(n);
    int x1 = 0;
    for (int i = 0;i < n;i++) {
        cin >> v[i];
        if (v[i] == 1)x1++;
    }

    if (x1) {
        cout << n - x1 << endl;
        return;
    }

    int mini = n + 1;
    for (int i = 0;i < n - 1; i++) {
        int g = v[i];
        for (int j = i + 1; j < n; j++) {
            g = __gcd(g, v[j]);
            if (g == 1) {
                mini = min(mini, j - i + 1);
                break;
            }
        }
    }
    if (mini >= n + 1)cout << -1 << endl;
    else
        cout << mini + n - 2 << endl;

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t = 1;
    while (t--) {
        solve();
    }
}