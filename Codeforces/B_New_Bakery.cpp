#include<iostream>

using namespace std;
#define test_cases(T) int T; cin >> T; while (T--)

#define int long long

void solve() {
    int n, a, b; cin >> n >> a >> b;
    int p = 0;

    if (a >= b) {
        cout << n * a;
    }
    else {

        int t = 0;
        int lastb = b - n + 1;
        t += (b * (b + 1)) / 2;
        if (lastb >= a) {
            t -= ((b - n) * (b - n + 1)) / 2;
        }
        else {
            t -= (a * (a + 1)) / 2;

            t += (n - (b - a)) * a;

        }

        cout << t;
    }

}



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y) {
        solve(); cout << endl;
    }


}



