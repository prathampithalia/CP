#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int a, b, x;  cin >> a >> b >> x;

    if (x % 2 == 0) {
        if (a > b) {
            for (int i = 0; i < x / 2; ++i)
                cout << "01";
            cout << string(b - x / 2, '1');
            cout << string(a - x / 2, '0');
        }
        else {
            for (int i = 0; i < x / 2; ++i)
                cout << "10";
            cout << string(a - x / 2, '0');
            cout << string(b - x / 2, '1');
        }
    }
    else if (a > b) {
        for (int i = 0; i < x / 2; ++i)
            cout << "01";
        cout << string(a - x / 2, '0');
        cout << string(b - x / 2, '1');
    }
    else {
        for (int i = 0; i < x / 2; ++i)
            cout << "10";
        cout << string(b - x / 2, '1');
        cout << string(a - x / 2, '0');
    }
    cout << endl;
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