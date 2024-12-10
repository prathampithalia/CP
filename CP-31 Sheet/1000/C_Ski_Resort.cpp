
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
#define ppair(x) each(i,x)cout<<i.first<<" "<<i.second<<endl;


#define ll long long
#define MOD 1000000007 
#define test_cases(T) int T ; cin>>T ; while(T--)


// #define int ll


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif



signed main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

test_cases(Y){
    int n , k ,q ;
    cin>>n>>k>>q;

//  at least k days
    // ai deg , go when ai <= q consecutive
// count ways

int hot = 0 , cold =0 ;
vector<int> a(n);

forr(i,n){
    cin>>a[i];
    if( a[i] > q)hot++;
    else cold++;
}


if( cold >= k){
    // check consecutive atleast k
    int pos = 0 , day = 0 ;
    vector<int> t;
    for(int i =0 ; i<n ; i++){
        if(a[i] <= q){
            day++;
        }
        else{
            if(day>=k){
                pos++;
                t.pb(day);
            }
            day = 0 ;
        }
    }
    if( day >= k)
        {
            pos++;
            t.pb(day);
        }


    if( pos ==0 )cout << 0 << endl;
    else{
        int ans = 0 ;
        int m = k-1;

        forr(i,t.size()){
            for(int j = k ; j<=t[i] ;j++){
                ans += (t[i] - (j - 1));
            }

        }
        cout << ans << endl;

    }

}
else cout << 0 << endl;


}


}