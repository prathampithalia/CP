#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    if (n & 1)cout << "YES";
    else {
        bool ok = false;

        while (n >= 4) {
            n = n / 2;
            if (n & 1) {
                ok = true;
                break;
            }
        }


        cout << (ok ? "YES" : "No");
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
    cin >> t;
    while (t--) {
        solve();
    }
}