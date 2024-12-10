#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, x;  cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int  l = 0, r = n - 1;
    int ans = 0;

    int w = 0;
    // EACH GONDOLA ONE OR TWO ONLY
    for (int i = n - 1; i >= l; i--) {
        w = v[i];
        while (w + v[l] <= x) {
            w += v[l];
            l++;
            break;
        }
        ans++;
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