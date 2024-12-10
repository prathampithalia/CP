#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n;i++) {
        cin >> A[i];
    }

    if (n <= 2) {
        cout << 0 << endl;
        return;
    }

    int ans = INT_MAX;
    for (int i = -1; i <= 1;i++) {
        for (int j = -1; j <= 1; j++) {
            bool good = true;
            int a = A[0] + i;
            int b = A[1] + j;
            int d = b - a, cnt = 0;

            for (int k = 0; k < n; k++) {

                // AP : a , a+d ,a+2d + a+3d...

                int ai = a + d * k;
                if (abs(ai - A[k]) > 1)good = false;
                if (abs(ai - A[k]) == 1)cnt++;
            }

            if (good)
                ans = min(ans, cnt);
        }
    }
    // if ALL CHANGED , so MAX ans = N 
    if (ans <= n)cout << ans << endl;
    else cout << -1 << endl;


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