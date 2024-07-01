#include<iostream>
#include<vector>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0, cur = v[0];
    int mx = 0;
    for (int i = 1; i < n; i++) {

        if (v[i] < cur) {
            cnt += (cur - v[i]);
        }
        else cur = v[i];

        mx = max(mx, cur - v[i]);
    }

    cout << mx + cnt << endl;

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