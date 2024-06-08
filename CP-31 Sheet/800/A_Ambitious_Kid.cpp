#include<iostream>
using namespace std;


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int A = 1e8;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        A = min(A, abs(x));
    }
    cout << A;

}