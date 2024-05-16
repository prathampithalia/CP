
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


#ifndef ONLINE_JUDGE
#include "template.cpp" 
#else
#define debug(...)
#define debugArr(...):
#endif 



signed main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

test_cases(Y){
    int n ; cin>>n;
    string s ;cin>>s;

    int ans = 0;
    
    string t = "";
    t += s[0];
    int sm = 0 ;
    for(int i = 1 ; i<n ; i++){
        if(t.back() != s[i]){
            t += s[i];
            sm = 0 ;
        }
        else{
            sm++;
            if( sm == 2){
                t += s[i];
                sm = 0 ;
            }
        }
    }
    cout << t.size()<<endl;

}



}