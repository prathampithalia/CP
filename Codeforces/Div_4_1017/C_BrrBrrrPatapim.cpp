// time-limit: 2000
// problem-url: https://codeforces.com/contest/2094/problem/C

#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int N;
    cin >> N;
    set<int> p;
    for (int i = 1; i <= 2 * N; i++) {
        p.insert(i);
    }
    vector<int> a(2 * N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int x;
            cin >> x;
            if (p.count(x)) p.erase(x);
            a[i + j - 1] = x;
        }
    }

    for (int i = 0; i < 2 * N; i++) {
        if (a[i] == 0) {
            a[i] = *p.begin();
            p.erase(p.begin());
        }
    }
    for (auto i : a) cout << i << ' ';

    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
