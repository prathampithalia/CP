#include<bits/stdc++.h>

using namespace std;
#define int long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve() {

    int n, x; cin >> n >> x;

    int a1 = 0, a2 = 0;
    vector<int> v(n);
    for (int i = 0;i < n;i++)
    {
        cin >> v[i];
        a1 += ((v[i] / x) + (bool)(v[i] % x));
        a2 += v[i];
    }

    cout << min(a1, a2 / x + (bool(a2 % x))) << ' ' << max(a2 / x + bool(a2 % x), a1) << endl;

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