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
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n; i++) {
        cin >> v[i];
    }

    vector<int> pos, neg;
    int p = 0, ne = INT_MAX;

    bool p_add = false;
    for (int i = 0; i < n;i++) {
        if (v[i] > 0) {
            if (ne != INT_MAX)neg.push_back(-ne);
            p = max(p, v[i]);
            ne = INT_MAX;
        }
        else {
            pos.push_back(p);
            p = 0;
            ne = min(ne, abs(v[i]));
        }
    }
    if (ne != INT_MAX)neg.push_back(-ne);

    pos.push_back(p);

    int t1 = 0;
    for (auto i : pos) t1 += i;
    for (auto i : neg) t1 += i;


    // debug(pos, neg, t1);
    cout << t1 << endl;

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