
#include<iostream>
#include<vector>

using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), t(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int x = v[i];
        int k = 1;
        while (x * k <= 2 * n - 1) {
            int t = x * k;
            int j = t - i - 2;
            if (j >= 0 && j < n && v[j] == k && i < j) {
                cnt++;
            }
            k++;
        }
    }
    cout << cnt << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}