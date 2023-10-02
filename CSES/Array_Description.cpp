// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


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

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

int n ,m ; cin>>n>>m;

vector<int> v(n);
vector<int> dp{};
forr(i,n){cin>>v[i]; if(v[i]==0) dp.pb(i);}

int i=0,cnt=0;
while(i<dp.size()){
   for(int j=1;j<=m ;j++)
   {

   if(abs(j - v[dp[i]+1]) <=1 && abs(j - v[dp[i]-1]<=1))cnt++;
   }
i++;
}

cout<<cnt<<endl;

}


//  10 10
// 0 0 0 0 0 0 0 0 0 5