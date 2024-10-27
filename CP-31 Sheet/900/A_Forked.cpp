#include<bits/stdc++.h>

using namespace std;
// #define int long long

void solve() {
    // a tiles in one direcion && 2 tiles in other

    int a, b;cin >> a >> b;
    int xk, yk, xq, yq;
    cin >> xk >> yk >> xq >> yq;
    // 8 POSITION , ANS = COUNT OF COMMON

    int ans = 0;
    set<pair<int, int>> s1, s2;
    int dx[] = { -1 , -1 , 1 , 1 };
    int dy[] = { -1 , 1 , -1 , 1 };

    for (int i = 0; i < 4; i++) {
        s1.insert({ xq + dx[i] * a, yq + dy[i] * b });
        s1.insert({ xq + dx[i] * b, yq + dy[i] * a });
        s2.insert({ xk + dx[i] * a, yk + dy[i] * b });
        s2.insert({ xk + dx[i] * b, yk + dy[i] * a });
    }

    for (auto i : s1) {
        if (s2.find(i) != s2.end())ans++;
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