#include<iostream>
#include<vector>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n; i++)cin >> v[i];

    int low = 0, high = n - 1, alice = 0, bob = 0, t1 = 0, t2 = 0;

    while (low <= high) {
        if (t1 + v[low] <= t2 + v[high]) {
            alice++;
            t1 += v[low];
            low++;
        }
        else {
            bob++;
            t2 += v[high];
            high--;
        }
    }

    cout << alice << ' ' << bob << endl;

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