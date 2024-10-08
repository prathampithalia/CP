#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        auto ub = s.upper_bound(x);
        // cout << x << ' ' << ub << endl;

        if (ub == s.end()) {
            s.insert(x);
        }
        else {
            s.erase(ub);
            s.insert(x);
        }
    }

    cout << s.size() << endl;
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