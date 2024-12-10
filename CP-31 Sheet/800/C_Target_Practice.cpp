// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
#define forr(i,n) for(int i=0 ; i<n ; i++)
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}

#define each(a, x) for (auto &a : x)
#define ll long long
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)







int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        int n = 10;
        // vector<vector<char>> v(n, vector<char> (n,'.'));
        ll int ans = 0;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                char t; cin >> t;

                if (t == 'X') {

                    if ((i == 0 && j < n) || (i == 9 && j < n) || (j == 9 && j < n) || (j == 0 && i < n))ans += 1;
                    else if (((i == 1 || i == 8) && j > 0 && j < n - 1) || ((j == 8 || j == 1) && i > 0 && i < n - 1)) { ans += 2; }

                    else if (((i == 2 || i == 7) && j > 1 && j < n - 2) || ((j == 7 || j == 2) && i > 1 && i < n - 2)) { ans += 3; }

                    else if (((i == 3 || i == 6) && j > 2 && j < n - 3) || ((j == 3 || j == 6) && i > 2 && i < n - 3)) { ans += 4; }

                    else if (((i == 4 || i == 5) && j > 3 && j < n - 4) || ((j == 4 || j == 5) && i > 3 && i < n - 4)) { ans += 5; }

                }
            }
        }
        cout << ans << endl;


    }

}