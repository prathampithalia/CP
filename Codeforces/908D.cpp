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



int lis(vector<ll int> const& a) {
    int n = a.size();
    const int INF = 1e9;
    vector<int> d(n+1, INF);
    d[0] = -INF;

    for (int i = 0; i < n; i++) {
        int l = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[l-1] < a[i] && a[i] < d[l])
            d[l] = a[i];
    }

    int ans = 0;
    for (int l = 0; l <= n; l++) {
        if (d[l] < INF)
            ans = l;
    }
    return ans;
}



int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

test_cases(Y){

ll int n,m; cin>>n>>m;
vector<ll int> a(n) , b(m);
forr(i,n)cin>>a[i];
forr(i,m)cin>>b[i];

ll int z= n+m;
vector<ll int> v;

vector<int> dpb(m) , dpa(n);
sort(all(b));
reverse(all(b));

for(int i=0 ; i<m ; i++){
   for(int j=0 ;j<n ;j++){
      if( b[i] > a[j] && dpb[i] == 0 && dpa[j]==0 ){
         v.pb(b[i]);
         dpb[i] = 1;
         v.pb(a[j]);
         dpa[j] = 1;
         break;
      }
      if( b[i] <= a[j] && dpa[j]==0){
         v.pb(a[j]);
         dpa[j]=1;
      }
   }
}
for(int i= 0 ;i<dpa.size() ;i++){
   if( dpa[i]==0) {
      v.pb(a[i]);
      dpa[i]=1;
   }
}
for(int i= 0 ;i<dpb.size() ;i++){
   if( dpb[i]==0) {
      v.pb(b[i]);
      dpb[i]=1;
   }
}
pvec(v)

cout<<" : "<<lis(v);
ce;

}



}