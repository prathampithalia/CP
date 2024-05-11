#include<bits/stdc++.h>

using namespace std;
#define int long long

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;

    cout << factorial(n);



}