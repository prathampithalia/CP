#include<iostream>
//#include<vector>

using namespace std;


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

    int n, k; cin >> n >> k;

    string s; cin >> s;
    int a[26] = { 0 }, b[26] = { 0 };

    for (auto i : s) {
        a[i - 'a']++;
        b[i - 'a']++;
    }
    // for(auto i  : a) cout << i; 
    int j = 0;
    int K = k;
    for (int i = 0; i < 26; i++) {
        if (K <= b[i]) {
            b[i] -= K;
            K = 0;
        }
        else {
            K -= b[i];
            b[i] = 0;
        }
    }

    string t = "";
    for (int i = 0; i < n;i++) {
        int x = s[i] - 'a';
        if (b[x] != 0 && a[x] <= b[x]) {
            t += s[i];
        }
        else {
            if (a[x] > b[x])a[x]--;
        }
    }

    cout << t;

}
