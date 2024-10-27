#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {

    // at x0
    //  x + d , x -d 
    //  jumps i 
    //  at even = left , odd - right

    // when x = even : 
    //     -1 + 2 + 3 - 4
    // when x = odd :
    //     +1 - 2 - 3 + 4

    // after every interval of 4, x comes to original point

    int x, n;
    cin >> x >> n;

    int X = (n / 4) * 4;

    for (int i = 1 + X; i <= n; i++) {
        if (x & 1) {
            x += i;
        }
        else {
            x -= i;
        }
    }

    cout << x << endl;

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