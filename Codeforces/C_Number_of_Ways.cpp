#include<bits/stdc++.h>

using namespace std;
// #define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif


void solve() {
    int n;cin >> n;
    vector<int> v(n);
    int tot = 0, ans = 0;
    vector<int> p(n);
    for (int i = 0;i < n; i++) {
        cin >> v[i];
        tot += v[i];
        p[i] = tot;
    }
    if (tot % 3) {
        cout << 0 << endl;
        return;
    }
    else {
        int fst = 0;

        // coutnting possible first parts then , whenever we encounter 
        // {2*tot/3} i.e second and third we add the cnt

        for (int i = 0;i < n - 1;i++) {
            if (p[i] == (2 * tot / 3))ans += fst;
            if (p[i] == (tot / 3))fst++;
        }

        cout << ans;
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