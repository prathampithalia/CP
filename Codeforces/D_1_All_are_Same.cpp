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
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());
    int ans = INT_MIN;

    set<int> gaps;
    int gc = 0;
    for (int i = 1; i < n; i++) {
        gc = __gcd(gc, v[i] - v[i - 1]);
        gaps.insert(v[i] - v[i - 1]);
    }

    if (gc)cout << gc << endl;
    else cout << -1 << endl;

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