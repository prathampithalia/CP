#include<bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

int dp[1005][1005];
char grid[1005][1005];
int MOD = 1e9 + 7;
void solve() {

    int  n; cin >> n;
    memset(dp, 0, sizeof(dp));



    for (int i = 0; i < n;i++) {
        for (int j = 0;j < n; j++) {
            cin >> grid[i][j];
        }
    }
    if (grid[0][0] == '*') {
        cout << 0 << endl;
        return;
    }

    dp[0][0] = 1;


    for (int i = 1; i < n; i++) {
        if (grid[0][i] == '*') break;
        dp[0][i] = dp[0][i - 1];
    }

    for (int i = 1; i < n; i++) {
        if (grid[i][0] == '*') break;
        dp[i][0] = dp[i - 1][0];
    }

    for (int i = 1; i < n;i++) {
        for (int j = 1; j < n; j++) {
            int d = dp[i - 1][j];
            int r = dp[i][j - 1];
            if (grid[i][j] == '.')dp[i][j] = (d + r) % MOD;

        }
    }

    cout << dp[n - 1][n - 1];

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