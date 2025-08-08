#include <bits/stdc++.h>

using namespace std;
// #define int long long

void solve() {
    string s;
    cin >> s;

    string a = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'q')
            a += 'p';
        else if (s[i] == 'p')
            a += 'q';
        else
            a += 'w';
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
