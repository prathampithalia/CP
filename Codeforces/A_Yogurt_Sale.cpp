#include<bits/stdc++.h>

using namespace std;

#define test_cases(T) int T; cin >> T; while (T--)

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    test_cases(Y) {
        int n, a, b; cin >> n >> a >> b;

        if (n & 1) {
            cout << min(n / 2 * b + a, n * a) << endl;
        }
        else cout << min(n / 2 * b, n * a) << endl;



    }


}