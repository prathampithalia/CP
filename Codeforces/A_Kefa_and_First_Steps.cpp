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

int n; cin>>n;
vector<ll int> v(n);
forr(i,n){cin>>v[i];}
ll int cntt=INT_MIN,cnt=0;
for(int i=1;i<n;i++)
{   if(v[i]>=v[i-1]){
      cnt++;
      cntt=max(cnt,cntt);
   }
   else cnt=0;
}
cout<<(cntt>0 ? cntt+1 : 1);

}


/*
 * @Author: Pratham Pithalia 
 * @Email: 1by4pieenot@gmail.com
 * @Date: 2023-07-13 23:17:14 
 * @Last Modified by: Pratham
 * @Last Modified time: 2023-07-13 23:25:57
 * @Description: DP
 */
