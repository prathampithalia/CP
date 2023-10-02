// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}

#define each(a, x) for (auto &a : x)
#define ll long long
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)







int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

test_cases(Y){

int n,k,q; 
cin>>n>>k>>q;

int ka=0;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]<=q)ka++;
}

vector<int> dp(n+1);

int cnt=0;
int ans=0;
for(int i=0; i<n;i++){
    if(v[i]<=q){cnt++;dp[i]=cnt;}

    else{ cnt=0 ; dp[i]=0;}
ans+=dp[i];
}
int kl=0;
set<int> ss(all(v));

each(a,ss){ if( a> q) kl++;}

int de= k * (ss.size()-kl);

if( ans >= k){ if( ans <= de) cout<<ans/de<<endl;
else cout<<ans<<endl;
}
else cout<<0<<endl;

}

}