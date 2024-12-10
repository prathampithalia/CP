#include<bits/stdc++.h>

using namespace std;
#define int long long

// a coins has
// prof : b cpins
// unprof , x coins , prof -= 2x 


void solve() {
    int a, b; cin >> a >> b;

    if (a >= b) {
        cout << a << endl;
        return;
    }
    else {
        int d = b - a;

        b -= (d * 2);
        a -= d;
        if (b <= 0) {
            cout << 0 << endl;
        }
        else if (a < b) {
            cout << 0 << endl;
        }
        else cout << a << endl;

    }

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