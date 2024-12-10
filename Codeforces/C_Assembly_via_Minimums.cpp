#include<bits/stdc++.h>

using namespace std;
#define int long long



void solve() {

    int n; cin >> n;

    int m = (n * (n - 1)) / 2;
    vector<int> B(m);
    int Max = INT_MIN;
    for (int i = 0; i < m; i++) {
        cin >> B[i];
        Max = max(Max, B[i]);
    }
    sort(B.begin(), B.end());

    vector<int> A;
    int j = n - 1;
    stack<int> s;
    for (int i = 0;i < m; i++) {
        s.push(B[i]);
        if (s.size() == j) {
            A.push_back(s.top());
            j--;
            while (!s.empty()) {
                s.pop();
            }
        }
    }
    A.push_back(Max);

    for (auto i : A) cout << i << ' ';

    cout << endl;
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