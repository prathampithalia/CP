#include<bits/stdc++.h>

using namespace std;
#define int long long

bool good(int n) {

    int N = n;
    while (N) {
        int d = N % 10;

        if (d != 0 && n % d) return false;

        N /= 10;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    map<int, int> mp;

    while (!good(n))n++;

    cout << n << endl;

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