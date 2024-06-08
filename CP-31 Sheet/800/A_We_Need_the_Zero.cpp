#include<iostream>
#include<string>
#include<vector>

using namespace std;

#define forr(i, n) for (int i = 0; i < n; i++)

#define test_cases(T) int T; cin >> T; while (T--)




signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    test_cases(Y) {
        int n ; cin>>n;
        vector<int> v(n);
        forr(i,n)cin>>v[i];
        int X = 0 ;
        forr(i,n){
            X = (X^v[i]);
        }

        cout << ((n&1 || X ==0) ? X : -1) << endl;
    }


}