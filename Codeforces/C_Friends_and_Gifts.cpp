#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    unordered_map<int, int> mp;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0;i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    vector<int> c(v.begin(), v.end());
    for (int i = 1; i <= n; i++) {
        if (mp.find(i) == mp.end())pq.push(i);
    }
    for (int i = n - 1;i >= 0;i--) {
        if (v[i] == 0) {
            if (pq.top() != (i + 1)) {
                v[i] = pq.top();
                pq.pop();
            }
            else {
                int t = pq.top();
                pq.pop();
                v[i] = pq.top();
                if (pq.size())pq.pop();
                pq.push(t);
            }
        }
    }
    // swap

    int ind1 = -1, ind2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == (i + 1) && c[i] == 0) {
            ind1 = i;
        }
        if (c[i] == 0)ind2 = i;
    }
    if (ind1 != -1) {
        swap(v[ind1], v[ind2]);
    }
    for (auto i : v)cout << i << ' ';

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