#include<bits/stdc++.h>


using namespace std;
// #define int long long

void solve() {

    int n, m, k;
    cin >> n >> m >> k;

    string A, B;
    cin >> A >> B;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int a = 0, b = 0, s1 = 0, s2 = 0;

    string c = "";

    while (a < n && b < m) {
        if (s1 == k) {
            c += B[b];
            b++;
            s1 = 0;
            s2 = 1;
        }
        else if (s2 == k) {
            c += A[a];
            a++;
            s2 = 0;
            s1 = 1;
        }
        else if (A[a] <= B[b]) {
            c += A[a];
            a++;
            s1++;
            s2 = 0;
        }
        else {
            c += B[b];
            b++;
            s2++;
            s1 = 0;
        }

    }

    cout << c << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
