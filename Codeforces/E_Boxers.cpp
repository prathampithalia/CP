#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), t(150002);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    t[0] = 1;
    for (int i = 0; i < n; i++) {
        if (v[i] == 1 && t[1] == 0) {
            t[v[i]] = 1;
            cnt++;
        }
        else if (t[v[i]] == 0 && t[v[i] - 1] == 1 && v[i] - 1 > 0) {
            t[v[i]] = 1;
            cnt++;
        }
        else {
            if (t[v[i] - 1] == 0 && v[i] - 1 > 0) {
                t[v[i] - 1] = 1;
                cnt++;
            }
            else if (t[v[i] + 1] == 0) {
                t[v[i] + 1] = 1;
                cnt++;
            }

        }
        //   cout << i <<' '<< cnt << endl;
    }
    //for(auto i : v)cout << i << ' '; cout<<endl;
    cout << cnt << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //   cin >> t;
    while (t--) {
        solve();
    }
}