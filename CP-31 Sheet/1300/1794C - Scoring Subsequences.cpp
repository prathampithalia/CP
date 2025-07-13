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

    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n;i++) {

        int l = 0, r = i;
        int mid = (l + r) >> 1;

        while (l < r) {
            int curLen = i + 1 - mid;
            if (v[mid] >= curLen) r = mid;
            else l = mid + 1;
            mid = (l + r) >> 1;
        }
        cout << (i - l + 1) << ' ';

    }
    cout << endl;

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