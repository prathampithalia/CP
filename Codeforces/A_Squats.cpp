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


int n ; cin>>n;
string s; cin>> s;
int stand = 0 , sit = 0 ;

for(auto i : s){
    if( i== 'X')stand++;
    else sit++;
}

if( sit == n/2) cout << 0 <<endl<<s<<endl ;
else{
    if( stand > sit){
        int req = abs(n/2 - stand) ;
        cout << req << endl;

        forr(i,n){
            if( s[i] == 'X' && req>=0){
                s[i] = 'x';
                req--;
            }
            if( req == 0) break;
        }
    }
    if( stand < sit){
        int req = abs(n/2 - sit) ;
        cout << req << endl;

        forr(i,n){
            if( s[i] == 'x' && req>=0){
                s[i] = 'X';
                req--;
            }
            if( req == 0) break;
        }
    }
    cout << s ;

}

}