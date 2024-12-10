#include<bits/stdc++.h>

using namespace std;
// #define int long long

bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    else
        return a.first < b.first;
}


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif



void solve() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)cin >> x[i];
    for (int i = 0; i < n; i++)cin >> y[i];

    vector<int> p(n);
    for (int i = 0; i < n;i++) {
        p[i] = y[i] - x[i];

    }
    sort(p.begin(), p.end());

    int l = 0, r = n - 1;
    int ans = 0;
    while (l < r) {
        if (p[r] + p[l] < 0) {
            l++;
        }
        else {
            ans++;
            r--;
            l++;
        }
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