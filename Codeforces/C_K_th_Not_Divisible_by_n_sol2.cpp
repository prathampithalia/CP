#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, k; cin >> n >> k;
    int l = 1, r = 1e15;
    int mid = (l + r) >> 1;

    int ans = 0;
    while (l <= r) {
        int count = mid - mid / n;
        // mid/n = numbers which are divisible by n

        if (count < k) l = mid + 1;
        else {
            ans = mid;
            r = mid - 1;
        }
        mid = (l + r) >> 1;
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