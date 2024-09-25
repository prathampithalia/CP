#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    string s; cin >> s;
    stack<char> x;
    int ans = 1, cnt = 0;
    for (auto i : s) {
        if (x.size() == 0) {
            x.push(i);
            cnt = 1;
        }
        else {
            if (x.top() == i) {
                cnt++;
            }
            else {
                x.pop();
                x.push(i);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;
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