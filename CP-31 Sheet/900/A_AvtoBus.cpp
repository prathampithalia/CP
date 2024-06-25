#include<bits/stdc++.h>

using namespace std;


#define int long long
#define test_cases(T) int T; cin >> T; while (T--)



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    test_cases(Y) {
        int n; cin >> n;

        if ((n&1) || n==2)cout << -1 << endl;
        else {
            int a = n / 6, b = n / 4;
            if (min(a, b) == 0) cout << max(a, b) << ' ' << max(a, b);
            else cout << a + (bool)(n % 6) << ' ' << b;
            cout << endl;
        }
    }



}