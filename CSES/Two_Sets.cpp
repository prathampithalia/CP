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
const int  MOD=1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)







int main() 
{
 

ios_base::sync_with_stdio(0); cin.tie(0);

 int n; cin>>n;

vector<int> v(n);
iota(all(v),1);

int z= (n*(n+1)/2);

if(z%2 != 0 ){cout<<"NO";}
else{
   cout<<"YES"<<endl;
   vector<int> a{},b{};
   int i=0;
   a.pb(v[n-1]);
   a.pb(v[n-2]);
   int s=sumall(a);
   a.pb(z/2-s);
   sort(all(a));
   cout<<a.size()<<endl;
pvec(a)
for(int i=1;i<=n;i++){
   if(binary_search(all(a),i)==0)b.pb(i);
}
cout<<endl<<b.size()<<endl;
pvec(b)
}  


}