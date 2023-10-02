
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

test_cases(Y){
   ll int  n, l,r;
   cin>>n>>l>>r;
   ll int v[n];
   forr(i,n)cin>>v[i];

   sort(v,v+n);
   ll int s=0,e=n-1,cnt=0;
   ll int mid=s+(e-s)/2;

for(int i=0;i<n-1;i++){
   mid=i+1;
   while(mid<n)
{   
   if(v[i]+v[mid]>=l && v[i]+v[mid]<=r){ cnt++ ;}
   mid++;
}   
}

cout<<cnt<<endl;
   

}

}

// 2
// 7
// 0
// 1
