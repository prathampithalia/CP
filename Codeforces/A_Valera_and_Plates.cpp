
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


int n,m,k; cin>>n>>m>>k;

vector<int> v(n);
int dish1 = 0 , dish2 = 0 ;
forr(i,n){
    cin>>v[i];
    if( v[i] == 1)dish1++;
    else dish2++;
    // 1  : m: bowls
    // 2  : m or k : bowls or plates 
}
int ans = 0 ;
int plate = k , bowl = m ;

for(int i =0 ; i<n ; i++){
    if(v[i] == 1 ){
        if(bowl == 0 ){
            bowl++;
            ans++;
        }
        if(bowl > 0) bowl --;
        dish1 -- ;
    }
    else {
        if( bowl>dish1){
            bowl -- ;
            dish2--;
        }
        else {
            if(plate == 0){
                if( bowl <=dish1){
                    plate++;
                    ans++; 
                }
            }
            if(plate > 0){ 
                plate -- ;
                dish2--;
            }
        }
    }

}
cout << ans ; 


}