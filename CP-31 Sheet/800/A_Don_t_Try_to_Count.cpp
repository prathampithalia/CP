#include<iostream>
#include<string>

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
        int n,m; cin>>n>>m;
        string x , s ; cin>>x>>s;
        bool found = false;
        int cnt = 0 ;
        forr(i,6){
            if(x.find(s) != x.npos)
            {
                found = true;
                break;
            }
            x += x;
            cnt++;
        }
        cout <<( found ? cnt : -1 ) << endl;
    }


}