#include <bits/stdc++.h>
using namespace std;
 
 
#define all(a) a.begin(),a.end()
 
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}
#define seev(v,n)  for(int i=0;i<n;i++){ll int ___; cin>>___; v.push_back(___);}
 
 
#define each(a, x) for (auto &a : x)
#define vi vector<int>
#define pb push_back
#define ll long long
#define lb lower_bound
#define ub upper_bound
#define sumall(a) accumulate(a.begin(),a.end(),0)
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)
 

int gcd(int a, int b) 
{ if (a == 0) return b; return gcd(b % a, a);}

int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

int n ; cin>>n;
vector<pair<int,int>> v(n);


for(int i=0 ;i<n ;i++){cin>>v[i].first>>v[i].second;}

sort(all(v));

int cnt=0;
for(int i=0;i<n;i++){
      if(v[i].second > v[i+1].first){cnt++;}
}

cout<<cnt;
}

