// time-limit: 2000
// problem-url: https://codeforces.com/contest/2094/problem/E

#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> b(30);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        for (int j = 0; j < 30; j++) {
            if (v[i] & (1 << j)) b[j]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int ak = v[i];
        int sum = 0;
        for (int bit = 0; bit < 30; bit++) {
            // x^x=0
            // b[bit] = count of set bit
            if ((1 << bit) & ak) {
                sum += (1 << bit) * (n - b[bit]);
            } else {
                sum += (1 << bit) * b[bit];
            }
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
