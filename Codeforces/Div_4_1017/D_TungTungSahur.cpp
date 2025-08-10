// time-limit: 2000
// problem-url: https://codeforces.com/contest/2094/problem/D

#include <bits/stdc++.h>

using namespace std;
#define int long long

#define pyes               \
    cout << "YES" << endl; \
    return;
#define pno               \
    cout << "NO" << endl; \
    return;
void solve() {
    string p, s;
    cin >> p >> s;

    vector<int> a, b;
    // COMPONENTS

    if (s[0] != p[0]) {
        pno;
    }
    s = '#' + s;
    p = '#' + p;
    int n = p.size(), m = s.size();

    for (int i = 1; i < n; i++) {
        if (p[i] == p[i - 1]) {
            a.back()++;
        } else {
            a.push_back(1);
        }
    }

    for (int i = 1; i < m; i++) {
        if (s[i] == s[i - 1])
            b.back()++;
        else
            b.push_back(1);
    }

    if (a.size() != b.size()) {
        pno;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i] || b[i] > 2 * a[i]) {
            pno;
        }
    }
    cout << "YES" << endl;
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
