// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl
#define ce cout<<endl
#define forr(i,n) for(int i=0 ; i<n ; i++)
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}

#define each(a, x) for (auto &a : x)
#define ppair(x) each(i,x)cout<<i.first<<" "<<i.second<<endl;


#define ll long long
#define MOD 1000000007 
#define test_cases(T) int T ; cin>>T ; while(T--)


#define int ll 

signed main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);




test_cases(Y) {
    string s; cin >> s;
    //  last 2 digits : 00 , 25 , 50 , 75

    int n = s.size();

    int ans = INT_MAX;


    // 00
    int a2 = 0, a1 = 0;
    for (int i = n - 1;i >= 0;i--) {
        if (s[i] == '0') {
            a1 = i;
            for (int j = i - 1; j >= 0;j--) {
                if (s[j] == '0') {
                    a2 = j;
                    // cout << a1 << ' ' << a2 << endl;
                    break;
                }
            }
            ans = min(ans, (a1 - a2 - 1) + (n - a1 - 1));
            
        }
    }

    a1 = 0, a2 = 0;
    // 25
    for (int i = n - 1;i >= 0;i--) {
        if (s[i] == '5') {
            a1 = i;
            for (int j = i; j >= 0;j--) {
                if (s[j] == '2') {
                    a2 = j;
                    // cout << a1 << ' ' << a2 << endl;

                    break;
                }
            }
            ans = min(ans, (a1 - a2 - 1) + (n - a1 - 1));
        }
    }

    a1 = 0, a2 = 0;

    // 50
    for (int i = n - 1;i >= 0;i--) {
        if (s[i] == '0') {
            a1 = i;
            for (int j = i - 1; j >= 0;j--) {
                if (s[j] == '5') {
                    a2 =j ;
                    // cout << a1 << ' ' << a2 << endl;

                    break;
                }
            }
            ans = min(ans, (a1 - a2 - 1) + (n - a1 - 1));

        }
    }

    a1 = 0, a2 = 0;
    // 75
    for (int i = n - 1;i >= 0;i--) {
        if (s[i] == '5') {
            a1 = i;
            for (int j = i; j >= 0;j--) {
                if (s[j] == '7') {
                    a2 = j;
                    // cout << a1 << ' ' << a2 << endl;

                    break;
                }
            }
            ans = min(ans, (a1 - a2 - 1) + (n - a1 - 1));
        }
    }


    cout << ans << endl;
}


}