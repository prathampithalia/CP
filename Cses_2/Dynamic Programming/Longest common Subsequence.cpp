#include<bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

int dp[1005][1005];


int helper(vector<int>L1, vector<int>L2) {

    int n = L1.size();
    int m = L2.size();

    for (int i = 1;i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (L1[i - 1] == L2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n][m];

}


void solve() {

    int n, m; cin >> n >> m;
    vector<int> L1(n), L2(m);
    for (int i = 0;i < n;i++) { cin >> L1[i]; }
    for (int i = 0;i < m;i++) { cin >> L2[i]; }

    memset(dp, 0, sizeof(dp));

    int len = helper(L1, L2);
    cout << len << endl;
    vector<int> arr(len);
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (L1[i - 1] == L2[j - 1]) {
            arr[len - 1] = L1[i - 1];
            i--;
            j--;
            len--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }

    for (int i = 0;i < arr.size(); i++)cout << arr[i] << ' ';

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