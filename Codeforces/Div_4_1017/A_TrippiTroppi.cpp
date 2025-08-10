// time-limit: 1000
// problem-url: https://codeforces.com/contest/2094/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    string a;
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        a += s[0];
    }
    cout << a << endl;
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
