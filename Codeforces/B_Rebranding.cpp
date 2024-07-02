#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
    int n, m; cin >> n >> m;
    string s; cin >> s;

    char A[26];
    for (int i = 0; i < 26; i++) {
        A[i] = i + 'a';
    }

    while (m--) {
        char a, b; cin >> a >> b;
        for (int i = 0; i < 26; i++) {
            if (A[i] == a) A[i] = b;
            else if (A[i] == b) A[i] = a;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << A[s[i] - 'a'];
    }
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}