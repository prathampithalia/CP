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
#define test_cases(T) int T ; cin>>T ; while(T--)

const int Mx=1e6 , M=1e9+7;
ll int dp[Mx+1];

int c[100];



int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);


ll int n,x; cin>>n>>x;

forr(i,n)cin>>c[i];

for(int i=1; i<=x;i++){
	dp[i]=1e9;
	for(int j=0;j<n;j++){
		if(c[j]<=i){
			dp[i]=min(dp[i],dp[i-c[j]]+1);
		}
	}
}

if(dp[x]>=1e9)cout<<-1;
else cout<<dp[x];


}