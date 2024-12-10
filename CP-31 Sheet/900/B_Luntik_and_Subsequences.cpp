#include<bits/stdc++.h>

using namespace std;

#define forr(i, n) for (int i = 0; i < n; i++)

#define ll    long long
#define test_cases(T) int T; cin >> T; while (T--)

#define vi    vector<int> 

#define int ll



void solve() {
    int n; cin >> n;

    vi v(n);
    int cnt1 = 0, cnt0 = 0;

    forr(i, n) {
        cin >> v[i];

        if (v[i] == 1) cnt1++;
        if (v[i] == 0) cnt0++;
    }

    cout << ((ll)1 << (cnt0)) * (ll)cnt1 << endl;



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