// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

#define test_cases(T) int T; cin >> T; while (T--)


int mini(string s, char b, char a) {

    int ans = 1e9 , a1 = 0, a2 = 0, n = s.size();

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == a) {
            a1 = i;
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == b) {
                    a2 = j;
                    break;
                }
            }
            ans = min(ans, (a1 - a2 - 1) + (n - a1 - 1));
        }
    }
    return ans;

}


void solve() {
    string s; cin >> s;

    cout << min({ mini(s , '0','0') , mini(s,'2','5') , mini(s,'5','0') , mini(s,'7','5') }) << endl;

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