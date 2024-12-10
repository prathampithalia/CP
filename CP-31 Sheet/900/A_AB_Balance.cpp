#include<iostream>
//#include<vector>

using namespace std;

void solve() {
   string s ;cin>>s;
   s[0] = s[s.size()-1] ; 
   cout << s << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}