#include<iostream>

using namespace std;

#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

#define test_cases(T) int T; cin >> T; while (T--)

#define int long long



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y) {
        int n, k; cin >> n >> k;

        if ((n - k) % 2 == 0 || (n - 2 * k) % 2 == 0) pyes;
        else pno;
    }


}