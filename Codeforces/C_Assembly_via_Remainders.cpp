#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n - 1);
    for (int i = 0;i < n - 1; i++) {
        cin >> v[i];
    }
    vector<int> a;
    int m = 1e8;

    a.push_back(m);
    for (int i = n - 2;i >= 0; i--) {
        a.push_back(a.back() + v[n - i - 2]);
    }

    for (int i = 0; i < n;i++)cout << a[i] << ' ';

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