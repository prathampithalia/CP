#include<bits/stdc++.h>

using namespace std;



void solve() {
    int n; cin >> n;
    string s;cin >> s;

    string a = "", b = "";

    bool fs = 0;

    // from start keep -> a as maximum 
    // when 2, 0 appears  : they are divided equally
    // when first 1 appears , add that to 'a' , 
    // add 0 to b , after this anything
    // inserted to b is always less than a

    // 2002100120
    // 1001100000 : a
    // 1001000120 : b

    for (auto i : s) {
        if (!fs) {
            if (i == '1') {
                a += '1';
                b += '0';
                fs = 1;
            }
            else if (i == '2') {
                a += '1';
                b += '1';
            }
            else {
                a += '0';
                b += '0';
            }
        }
        else {
            b += i;
            a += '0';
        }
    }
    cout << a << endl << b << endl;

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)solve();

}
