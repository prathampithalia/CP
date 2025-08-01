#include <bits/stdc++.h>
using namespace std;
// #define int long long

// https://www.codechef.com/problems/SPLIT7

bool helper(string s, int mid, int k) {
    int n = s.size();
    int e = 0, z = 0, part = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0')
            z++;
        else
            e++;
        e = max(e, z);
        if (e >= mid) {
            part++;
            z = 0;
            e = 0;
        }
    }
    return part >= k;
}
void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (n == k) {
        cout << 1 << endl;
        return;
    }

    int L = 1, R = n + 0;
    int ans = 1;
    while (L <= R) {
        int mid = (L + R) / 2;
        if (helper(s, mid, k)) {
            ans = mid;
            L = mid + 1;
        }
        else {
            R = mid - 1;
        }
    }

    cout << ans << endl;
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
