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


test_cases(Y){

    int n; cin>>n;

vector<pair<int,int>> v(n);

if(n%2==1){

int j=n-2;
for(int i=0;i<n;i++){
    cin>>v[i].second;
    if( 2*i + 1 <= n ){v[i].first= 2*i ;}
    else {v[i].first=j; j=j-2;}
}

sort(all(v));
each(_,v){ cout<<_.second<<" ";}
cout<<endl;

}
else{

int j=n-1;
for(int i=0;i<n;i++){
    cin>>v[i].second;
    if( 2*i + 1 < n ){v[i].first= 2*i ;}
    else {v[i].first=j; j=j-2;}
}

sort(all(v));
each(_,v){ cout<<_.second<<" ";}
cout<<endl;


}

}

}