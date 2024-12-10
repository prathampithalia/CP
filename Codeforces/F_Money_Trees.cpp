#include<bits/stdc++.h>

using namespace std;
#define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif



void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n), h(n), p(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 0, j = 0, sum = 0;

    // Sliding window
    for (int i = 0;i < n;i++) {
        if (i && h[i - 1] % h[i]) {
            sum = a[i];
            j = i;
        }
        else  sum += a[i];

        while (j <= i && sum > k) {
            sum -= a[j];
            j++;

        }
        ans = max(ans, i - j + 1);
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