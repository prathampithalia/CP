#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int x, n; cin >> x >> n;
    set<int> s;
    map<int, int> mp;
    s.insert(0);
    s.insert(x);
    mp[x] = 1;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;

        auto it = s.lower_bound(a);
        int end = *it;
        it--;
        int start = *it;
        mp[end - start]--;
        if (!mp[end - start]) mp.erase(end - start);

        s.insert(a);
        mp[end - a]++;
        mp[a - start]++;

        cout << ((--mp.end())->first) << ' ';

    }


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