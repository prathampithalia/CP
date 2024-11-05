#include<bits/stdc++.h>

using namespace std;
#define int long long

vector<int> fact;

void solve() {
    int n; cin >> n;

    // Trying all possibilities
    int ans = INT_MAX;
    for (int i = 0; i <= (1 << 14); i++) {

        int t = 0;
        for (int j = 0; j < fact.size(); j++) {
            if (i & (1 << j)) t += fact[j];
        }

        if (t <= n) {
            int N = n - t;
            int one = __builtin_popcountll(N) + __builtin_popcountll(i);
            ans = min(ans, one);
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


    fact.push_back(1);
    for (int i = 2;i <= 14; i++) {
        fact.push_back(fact.back() * i);
    }

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}