#include <iostream>
#include <vector>
using namespace std;

#define forr(i, n) for (int i = 0; i < n; i++)

#define ll    long long
#define MOD   1000000007
#define test_cases(T) int T; cin >> T; while (T--)

#define vi    vector<int> 
#define int ll 



void solve() {
    int n; cin >> n;
    int A = 0;
    vi v(n);
    int mini = 1e9;
    forr(i, n) {
        cin >> v[i];
        mini = min(v[i], mini);
    }
    bool ok = true;
    for (int i = n - 2; i >= 0; i--) {

        while (v[i] >= v[i + 1] && v[i] > 0) {
            A++;
            v[i] /= 2;
        }

        // for consecutive Zeroes
        if (v[i] == v[i + 1]) {
            ok = false;
            cout << -1 << endl;
            break;
        }
    }
    if (ok) cout << A << endl;


}



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y)solve();


}