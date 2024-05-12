#include<bits/stdc++.h>

using namespace std;


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    string s;cin >> s;

    string ans = "";

    for (int i = 0; i < s.size();i++) {
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
            ans += '.';
            ans += s[i];
        }
    }

    cout << ans;

}