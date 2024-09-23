#include<bits/stdc++.h>

using namespace std;
#define int long long

int n;
vector<int> v;

int help(int i, int sum1, int sum2) {
    if (i == n) {
        return abs(sum1 - sum2);
    }

    return min(help(i + 1, sum1, sum2 + v[i]), help(i + 1, sum1 + v[i], sum2));

}

void solve() {
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << help(0, 0, 0);

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