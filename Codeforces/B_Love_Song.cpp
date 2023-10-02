// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
 * @Author: Pratham Pithalia 
 * @Email: 1by4pieenot@gmail.com
 * @Date: 2023-07-13 18:07:47 
 * @Last Modified by: Pratham
 * @Last Modified time: 2023-07-13 21:58:07
 * @Description: test case 4 TLE  , optimization required
 */


#define all(a) a.begin(),a.end()

#define forr(i,n) for(int i=0 ; i< n ;i++) 
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}
#define seev(v,n)  for(int i=0;i<n;i++){ll int ___; cin>>___; v.push_back(___);}


#define each(a, x) for (auto &a : x)
#define vi vector<int>
#define pb push_back
#define ll long long
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define sumall(a) accumulate(a.begin(),a.end(),0)
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)




int main() 
{


ios_base::sync_with_stdio(0); cin.tie(0);



// int n,q; cin>>n>>q;
// string s; cin>>s;

// vector<pair<int,int>> v(q);
// forr(i,q){
//    cin>>v[i].first>>v[i].second; 
// }

// for(int i=0;i<q;i++){
//    int cnt=0;
//    for(int k=v[i].first;k<=v[i].second;k++){
//       cnt+= int(s[k-1])-96;
      
//    }
//    cout<<cnt<<endl;
// }

vector<int> pref(1e6+1,0);

int n,q; cin>>n>>q;
string s; cin>>s;

for(int k=1;k<=n;k++){
   pref[k]=pref[k-1]+ int(s[k-1])-96;
   
}

forr(i,q){
   int l,r;
   cin>>l>>r;
   cout<<pref[r]-pref[l-1]<<endl;
}

}


