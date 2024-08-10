#include<bits/stdc++.h>

using namespace std;
#define int double

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int c1 = 0, c0 = 0;
    for (auto i : s) {
        c1 += (i == '1');
    }
    c0 = n - c1;

    if (c1 == 0) {
        cout << n << endl;
        return;
    }

    if (c0 == 0) {
        cout << 0 << endl;
        return;
    }

    int l1 = 0, r1 = c1;
    int l0 = 0, r0 = c0;
    int ind = -11099;

    if (r1 >= r0) {
        ind = 0;
    }

    for (int i = 0;i < n;i++) {
        if (s[i] == '1') {
            l1++;
            r1--;
        }
        else {
            l0++;
            r0--;
        }

        // if (l0 >= (i + 1) / 2 || r1 >= ((n - i + 1) / 2)) {
        //     if (abs(n - 2 * ind) > abs(n - (2 * (i + 1))))ind = 1 + i;
        // }
        if (l0 >= l1 && r1 >= r0) {
            if (abs(n - 2 * ind) > abs(n - (2 * (i + 1))))ind = 1 + i;

        }
    }

    cout << ind << endl;



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