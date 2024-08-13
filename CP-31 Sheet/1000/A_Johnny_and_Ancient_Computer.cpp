#include<bits/stdc++.h>

using namespace std;
#define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif


void solve() {

    int a, b; cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
        return;
    }

    if (a > b && (a & 1)) {
        cout << -1 << endl;
        return;
    }

    vector<int> v;

    if (a > b) {
        while (a != b) {
            b *= 2LL;
            v.push_back(2);
            if (b > a) {
                cout << -1 << endl;
                return;
            }
        }
    }
    else {
        while (a != b) {
            a *= 2;
            v.push_back(2);
            if (a > b) {
                cout << -1 << endl;
                return;
            }
        }
    }

    int cnt = 0, p = 1;

    while (v.size() != 0) {
        p *= v.back();
        if (p == 8) {
            cnt++;
            p = 1;
        }
        v.pop_back();
    }

    cout << cnt + (p != 1) << endl;


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