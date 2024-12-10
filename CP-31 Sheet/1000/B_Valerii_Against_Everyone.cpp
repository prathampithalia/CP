#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    bool ans = false;
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        if (mp[v[i]] >= 2) {
            ans = true;
        }
    }
    // Just find a repeating num 
    // if  present we have 2 subarray of len 1
    cout << (ans ? "YES" : "NO") << endl;

}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}