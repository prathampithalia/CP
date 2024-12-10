#include<iostream>
#include<vector>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];
    int mx = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] <= mx) mx++;
        else mx = v[i];
    }
    cout << mx << endl;
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