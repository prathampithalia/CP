#include<bits/stdc++.h>

using namespace std;
#define int long long

int help(int i, int cond, vector<vector<int>>& ind, vector<int>& v, vector<vector<int>>& dp) {

    if (i == v.size()) return 0;
    if (dp[i][cond] != -1) return dp[i][cond];


    int ans = cond + help(i + 1, 1, ind, v, dp);
    int nxt = (upper_bound(ind[v[i]].begin(), ind[v[i]].end(), i) - ind[v[i]].begin());

    if (nxt != ind[v[i]].size()) {
        ans = min(ans, help(ind[v[i]][nxt], 0, ind, v, dp));
    }

    return dp[i][cond] = ans;


}


void solve() {
    int n; cin >> n;
    vector<int> v(n);
    vector<vector<int>> ind(n + 1);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
        ind[v[i]].push_back(i);
    }

    vector<vector<int>> dp(n + 1, vector<int>(2, -1));

    int ans = help(0, 1, ind, v, dp);

    cout << n - ans << endl;

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