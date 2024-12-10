#include<bits/stdc++.h>

using namespace std;
#define int long long


void solve() {
    int n, m;cin >> n >> m;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    map<int, int> mp;
    queue<int> q;

    for (int i = 0;i < n; i++) {
        q.push(x[i]);
        mp[x[i]] = 0;
    }

    int ans = 0;
    vector<int> v;
    while (!q.empty()) {
        if (v.size() == m) break;
        int x = q.front();
        q.pop();

        for (auto i : { 0,1,-1 }) {
            if (i == 0) {
                if (mp[x]) {
                    ans += mp[x];
                    v.push_back(x);
                }
            }
            else {
                if (mp.count(x - i) == 0) {

                    mp[x - i] = mp[x] + 1;
                    q.push(x - i);
                }
            }
        }
    }
    cout << ans << endl;

    for (auto i : v)cout << i << ' ';
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