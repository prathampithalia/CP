#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    bool repeat = true;
    for (int i = 1; i < n; i += 3) {
        if (s[i] != s[i + 1])repeat = false;
    }

    cout << (repeat ? "YES" : "NO") << endl;
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
