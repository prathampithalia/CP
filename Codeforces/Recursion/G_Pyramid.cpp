#include<bits/stdc++.h>

using namespace std;
#define int long long

int k = 0;
void pattern(int n, int k) {
    if (n == 0) return;
    pattern(n - 1, k + 1);
    for (int i = 0; i < k; i++)cout << ' ';
    for (int i = 1; i <= 2 * n - 1;i++)cout << '*';
    cout << endl;

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    pattern(n, 0);

}