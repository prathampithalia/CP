#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, k; cin >> n >> k;

    string s; cin >> s;

    for (int i = 0; i < n;i++) {
        if (s[i % k] == '?' && s[i] != '?') {
            s[i % k] = s[i];
        }
    }

    bool ans = true;

    // abcdefgh
    // ....
    //  ....
    // a == e  

    // in first window of size : k
    // count of 1 ,0 <= k/2 


    for (int i = 0; i < n;i++) {
        if (s[i] != '?' && s[i % k] != '?') {
            if (s[i] != s[i % k])ans = false;
        }
    }

    int one = 0, zero = 0;

    for (int i = 0;i < k;i++) {
        if (s[i] == '1')one++;
        if (s[i] == '0')zero++;
    }

    ans &= (one <= k / 2 && zero <= k / 2);

    cout << (ans ? "YES" : "NO") << endl;
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