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
// freopen("output1.txt", "w", stdout);
#endif

ios_base::sync_with_stdio(0); cin.tie(0);

int n, x;
cin>>n>>x;
vector<pair<ll,ll>> v(n); 
for(int i=0  ;i<n;i++){
	cin>>v[i].first;
	v[i].second=i+1;
}
sort(all(v));

int s=0 , e=n-1;
ll int a1=INT_MAX , a2=INT_MIN ;
while(s<e){
	if( v[s].first+v[e].first == x){ a1=min(v[s].second, a1 ) ;  
		a2=max(a2,v[e].second); 
	}

	if( v[s].first > v[e].second) e--;
	else s++;
}

if( a1== INT_MAX || a2==INT_MIN) cout<<"IMPOSSIBLE"<<endl;
else cout<<a1<<" "<<a2;
}