#include<bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

int dp[5005][5005];


int helper(string L1, string L2) {

    int n = L1.size(), m = L2.size();

    for (int i = 0; i <= n;i++)dp[i][0] = i;
    for (int i = 0; i <= m;i++)dp[0][i] = i;



    for (int i = 1; i <= n;i++) {
        for (int j = 1; j <= m; j++) {
            if (L1[i - 1] == L2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else {
                dp[i][j] = 1 + min({ dp[i - 1][j - 1] , dp[i - 1][j],dp[i][j - 1] });
            }
        }
    }

    return dp[n][m];

}


void solve() {

    memset(dp, -1, sizeof(dp));
    string a, b;cin >> a >> b;

    int n = a.size(), m = b.size();
    int len = helper(a, b);

    cout << len << endl;


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