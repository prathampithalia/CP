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


int pv(int n)
{
    if(n==0) return 1;
    return 2*pv(n-1);
    
}




int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

ll int k2, k3, k5, k6;
//      2  3  5  6  ---- 32 , 256
cin >> k2 >> k3 >> k5 >> k6;

ll int m1 = min({k2, k6, k5});

ll int a1 = 256 * m1;

ll int a2 = 32 * min(abs(m1 - k2), k3);

cout<<a1+a2<<endl;




}