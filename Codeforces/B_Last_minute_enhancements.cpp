#include<iostream>
#include<map>

using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int A[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> A[i];

        if (mp[A[i]] > 0) {
            mp[A[i] + 1]++;
        }
        mp[A[i]]++;
    }

    cout << mp.size() << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
