#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {

    string s; cin >> s;
    vector<char>v;
    for (char i = 'a'; i <= 'z';i++)v.push_back(i);
    for (char i = 'a'; i <= 'z';i++)v.push_back(i);

    if (s.size() == 1) {
        cout << s;
        return;
    }
    for (int i = 1;i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            if (i + 1 < s.size()) {

                if (v[s[i + 1] - 'a' + 1] != s[i]) s[i] = v[s[i + 1] - 'a' + 1];
                else {
                    s[i] = v[s[i - 1] - 'a' + 1];
                }
            }
            else {
                s[i] = v[s[i - 1] - 'a' + 1];
            }
        }
    }

    cout << s;

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