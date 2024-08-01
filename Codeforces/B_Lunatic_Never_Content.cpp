#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int g = 0;
    // a[i]mod x == a[n-i-1]mod x : as Palindrome 
    // (a[i] - a[n-i-1]) = 0 mod x 
    // means x divides (a[i] - a[n-i-1])


    for (int i = 0; i < n / 2;i++) {
        g = __gcd(g, abs(v[i] - v[n - i - 1]));
    }

    cout << g << endl;

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