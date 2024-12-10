#include<bits/stdc++.h>

using namespace std;
#define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

const int N = 1e6 + 1;
void solve() {
    int n; cin >> n;
    vector<int> v(n);
    unordered_map<int, priority_queue<int>> loc;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        loc[v[i]].push(i);
    }

    int x0 = 0;
    sort(v.rbegin(), v.rend());
    vector<int> x(n);

    int s = 1, dis = 0;

    for (int i = 0;i < n;i += 2) {
        x[loc[v[i]].top()] = s;
        loc[v[i]].pop();
        if (i + 1 < n)
        {
            x[loc[v[i + 1]].top()] = -s;
            loc[v[i + 1]].pop();
        }

        dis += (2 * s * v[i]);
        if (i + 1 < n)dis += (2 * s * v[i + 1]);
        s++;
    }

    cout << dis << endl;
    cout << x0 << ' ';
    for (int i = 0; i < n; i++) {
        cout << x[i] << ' ';
    }

    cout << endl;




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