#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    int i = 1;

    // starting numbers will form the largest group

    while (1) {
        if (n % i)break;
        i++;
    }

    cout << i - 1 << endl;
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
