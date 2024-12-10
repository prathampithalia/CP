#include<bits/stdc++.h>

using namespace std;
#define int long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

bool check(int x, int y, int z) {

    if (2 * y == (z + x)) return true;
    return false;

}

void solve() {
    int a, b, c; cin >> a >> b >> c;

    int a1 = b - (c - b);
    if (a1 && a1 % a == 0 && a1 >= a) {
        yes;
        return;
    }

    int b1 = c - (c - a) / 2;
    if (b1 && b1 % b == 0 && (c - a) % 2 == 0 && b1 >= b) {
        yes;
        return;
    }

    int c1 = b + (b - a);
    if (c1 && c1 % c == 0 && c1 >= c) {
        yes;
        return;
    }

    no;

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