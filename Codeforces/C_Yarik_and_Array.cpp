#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++)
    {
        cin >> v[i];
    }

    int ans = v[0], tot = 0;
    stack<int> s;

    for (int i = 0; i < v.size();i++) {

        if (s.size() == 0) {
            s.push(v[i]);
            tot += v[i];
            if (tot < 0) tot = 0;
        }
        else {
            if (tot < 0) tot = 0;
            if (abs(s.top()) % 2 == abs(v[i]) % 2) {
                tot = v[i];
                s.push(v[i]);
            }
            else {
                tot += v[i];
                s.push(v[i]);
            }

            ans = max(ans, tot);
        }
        // ans = max(ans, tot);

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
    cin >> t;
    while (t--) {
        solve();
    }
}