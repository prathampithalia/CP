#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n);


    // lOGIC :
    // applying x , y on operation on a,b is similar to
    // APPPLYING (x+y) operations on A only

    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int b;cin >> b;
        pq.push(abs(a[i] - b));
    }
    int k = x + y;
    while (k > 0) {
        int t = pq.top();
        pq.pop();
        t--;
        pq.push(t);
        k--;
    }

    int ans = 0;
    while (!pq.empty()) {
        int t = pq.top();
        ans += (t * t);
        pq.pop();
    }

    cout << ans;

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