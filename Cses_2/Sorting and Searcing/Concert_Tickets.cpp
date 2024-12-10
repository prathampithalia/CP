#include<bits/stdc++.h>

using namespace std;
#define int long long

#define LB(c, x)  distance((c).begin(), lower_bound(c.begin(),c.end(), (x)))

void solve() {
    int n, m; cin >> n >> m;
    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    sort(h.begin(), h.end());
    vector<int> p(n);
    for (int i = 0; i < m; i++) {
        int t;cin >> t;
        int ind = LB(h, t);
        if (h[ind] == t) {
            if (!p[ind]) {
                cout << h[ind] << endl;
                p[ind] = 1;
            }
            else {
                bool f = true;
                while (ind--) {
                    if (!p[ind])
                    {
                        cout << h[ind] << endl;
                        p[ind] = 1;
                        f = false;
                        break;
                    }
                }
                if (f)cout << -1 << endl;
            }
        }
        else {
            bool f = true;
            while (ind--) {
                if (!p[ind])
                {
                    p[ind] = 1;
                    cout << h[ind] << endl;
                    f = false;
                    break;
                }
            }
            if (f)cout << -1 << endl;

        }
    }

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