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
    string s, t; cin >> s >> t;

    int  at = 0;
    for (auto i : t) {
        if (i == 'a')at++;
    }

    if (at == t.size()) {
        if (at == 1)cout << 1 << endl;
        else cout << -1 << endl;

        return;
    }

    if (at != 0) cout << -1 << endl;
    else {
        // vector<string> v;
        // v.push_back(s);
        // while (s.find('a') != s.npos) {
        //     int j = s.find('a');
        //     s.replace(j, t.size(), t);
        //     v.push_back(s);
        //     // debug(v);   
        // }
        // cout << (v.size()) << endl;

        // THIS SKIPS OTHER POSSIBLE STRINGS , SO WA

        cout << (1LL << (s.size())) << endl;

    }


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