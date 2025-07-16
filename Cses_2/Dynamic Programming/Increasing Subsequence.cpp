#include<bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

void solve() {

    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0;i < n;i++) { cin >> arr[i]; }

    vector<int> temp;
    temp.push_back(arr[0]);

    for (int i = 1;i < n;i++) {
        if (arr[i] > temp.back()) {
            temp.push_back(arr[i]);
        }
        else {
            int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();

            temp[ind] = arr[i];
        }

    }

    cout << temp.size();


}



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}