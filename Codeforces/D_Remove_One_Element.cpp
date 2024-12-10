#include<iostream>
#include<vector>

using namespace std;
// #define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);


    int n; cin >> n;
    vector<int> v(n), t(n + 5), f(n + 5);
    for (int i = 0; i < n; i++)cin >> v[i];
    int cnt = 0;

    for (int i = 1; i < n; ) {
        cnt++;
        if (i == 1 && v[1] > v[0]) {
            t[0] = cnt;
            t[1] = cnt;
        }
        t[i++] = cnt;
        while (i < n && v[i] > v[i - 1]) {
            t[i++] = cnt;
        }
    }

    int only = 0;
    for (int i = 0; i < n; i++) {
        f[t[i]]++;
        only = max(only, f[t[i]]);
    }

    int A = 0;
    for (int i = 1; i < n - 1; i++) {
        if (v[i - 1] < v[i + 1] && t[i - 1] != t[i + 1]) {
            A = max(A, f[t[i - 1]] + f[t[i + 1]] - 1);
        }
    }

    //debug(t,v,f);
    cout << max(only, A) << endl;
}