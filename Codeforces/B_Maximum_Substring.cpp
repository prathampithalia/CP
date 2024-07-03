#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int y = 0, x = 0;
    for (auto i : s)if (i == '0')x++;

    y = n - x;

    int ans = 0;
    if (x == 0) ans += y * y;
    else if (y == 0) ans += x * x;
    else ans += x * y;

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            a++;
            ans = max(ans, b * b);
            b = 0;
        }
        else {
            ans = max(ans, a * a);
            b++;
            a = 0;
        }
    }
    ans = max(ans, max(a * a, b * b));
    cout << ans << endl;

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
