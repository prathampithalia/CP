// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()

#define forr(i,n) for(int i=0 ; i< n ;i++) 
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}
#define seev(v,n)  for(int i=0;i<n;i++){ll int ___; cin>>___; v.push_back(___);}


#define each(a, x) for (auto &a : x)
#define pb push_back
#define ll long long
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define sumall(a) accumulate(a.begin(),a.end(),0)
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)


bool sea(vector<ll int> &v , int x){
    bool ans=false;
    for(int i=0;i<v.size(); i++){
        if(x== v[i]) ans=true;
    }
    return ans;
}





int main() 
{


ios_base::sync_with_stdio(0); cin.tie(0);

test_cases(Y){
    int n; cin>>n;
    vector<ll int> v(n);

    int mn = INT_MAX, mx = INT_MIN;

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }

    if(mn < 0) cout << mn << '\n';
    else cout << mx << '\n';

}




}