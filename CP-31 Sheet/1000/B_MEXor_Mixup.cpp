#include<bits/stdc++.h>

using namespace std;
#define int long long
int computeXOR(int n)
{

    // If n is a multiple of 4 
    if (n % 4 == 0)
        return n;

    // If n%4 gives remainder 1 
    if (n % 4 == 1)
        return 1;

    // If n%4 gives remainder 2 
    if (n % 4 == 2)
        return n + 1;

    // If n%4 gives remainder 3 
    return 0;
}
void solve() {
    int a, b; cin >> a >> b;

    int x = computeXOR(a - 1);

    if (x == b) {
        cout << a << endl;
    }
    else if ((x ^ b) == a) {
        cout << a + 2 << endl;
    }
    else {
        cout << a + 1 << endl;
    }


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