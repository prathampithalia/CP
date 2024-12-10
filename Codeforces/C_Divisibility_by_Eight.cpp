#include<bits/stdc++.h>

using namespace std;
// #define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

string s;
unordered_map<string, int> mp;

bool present(string t) {

    int j = 0;
    for (int i = 0;i < s.size(); i++) {
        if (s[i] == t[j])j++;

        if (j == t.size()) return true;
    }

    return false;

}

void solve() {
    cin >> s;

    for (auto i : mp) {
        if (present(i.first)) {
            cout << "YES" << endl;
            cout << i.first << endl;
            return;
        }
    }


    cout << "NO";
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    for (int i = 0;i <= 1000; i += 8) {
        string k = to_string(i);
        mp[k] = 1;
    }

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}