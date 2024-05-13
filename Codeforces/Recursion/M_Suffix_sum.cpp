#include<bits/stdc++.h>

using namespace std;

#define int long long

int total(vector<int>& v, int n, int k) {
    if (k == 0) return 0;
    return v[n] + total(v, n - 1, k - 1);

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];

    cout << total(v, n - 1, k);


}