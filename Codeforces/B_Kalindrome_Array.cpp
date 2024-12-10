
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define int long long


bool willBePal(vector<int> v, int x) {

    vector<int> vv;
    for (auto i : v) {
        if (i != x)vv.push_back(i);
    }
    vector<int> a = vv;
    reverse(vv.begin(), vv.end());

    if (a == vv) return true;

    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int low = 0, high = n - 1;
    bool pos = true;

    vector<int> a(A.begin(), A.end());
    reverse(a.begin(), a.end());
    if (A == a) {
        cout << "YES" << endl;
        return;
    }

    vector<int> T;

    while (low < high) {
        if (A[low] == A[high]) {
            low++;
            high--;
        }
        else {
            T.push_back(A[low]);
            T.push_back(A[high]);
            break;
        }
    }

    if (willBePal(A, T[0]) || willBePal(A, T[1])) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


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