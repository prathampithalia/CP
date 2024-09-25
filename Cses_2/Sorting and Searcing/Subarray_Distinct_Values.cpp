#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_map<int, int> freq;

    int l = 0, r = 0, dis = 0;
    int ans = 0;

    while (r < n) {
        if (freq[v[r]] == 0 || freq.find(v[r]) == freq.end()) {
            dis++;
        }
        freq[v[r]]++;

        while (dis > k) {
            freq[v[l]]--;
            if (freq[v[l]] == 0) {
                dis--;
            }
            l++;
        }

        ans += (r - l + 1);
        r++;
    }

    cout << ans;

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