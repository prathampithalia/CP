#include <bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define forab(i,a,b) for (int i = a; i < b; i++)

#define pvec(a,x)  for(auto &a : x){cout<<a<<" ";}
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
#define m 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)


int modpow(int x, int n) {
if (n == 0) return 1%m;
long long u = modpow(x,n/2);
u = (u*u)%m;
if (n%2 == 1) u = (u*x)%m;
return u;
}


int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

test_cases(T){
    ll int x,n;
    cin>>x>>n;
    cout<<modpow(x,n)<<endl;
}
}