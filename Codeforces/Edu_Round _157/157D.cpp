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

 int n; cin>>n;
vector<int> v(n-1);

forr(i,n-1) { cin>>v[i];}

vector<pair<int,int>> dp(n);

for(int i=0 ;i<n ;i++){
    dp[i].first= i;
    dp[i].second= 0;
}

vector<int> ans(n);

if( v[0] % 2 )ans[0]=2;
else ans[0]=0;

int ii=0;

for(int i=0 ; i<n-1 ; i++){
    for(int j=0 ; j<n;j++){
        {
            if( ( ans[i]^dp[j].fi) == v[ii]  && dp[j].se == 0){
                ii++;
                dp[j].se = 1;
                ans[i+1] = dp[j].first;
                break;
            }
        }
    }
}

pvec(ans)




}