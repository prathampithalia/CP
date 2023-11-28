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


test_cases(Y){
    int n,k;
    cin>>n>>k;

    vector<ll int> v(n);
    ll int missing =  0 ;
    ll int t[n+1]{0};

    forr(i,n){
        cin>>v[i];
        t[v[i]]=1;
    }

    forr(i,n){if( t[i]==0 ) missing = i ;}
    vector<ll int > a(n);

// 1
// 2 0 1
// 2 1
// 2 3 4 5 0

// 1 1
// 0

// 7 5 3 0 4 2 1 6 9 10

if (n==1){
    if( v[0]==0){
        if( k%2==0) cout<< 0<<endl;
        else cout<< 1<<endl;
    }
    else {
        if( k%2==0) cout<< 1<<endl;
        else cout<< 0<<endl;
    }
}    
else{
    if( (k/n)%2 == 0 ){
        a[0]=missing;
        for(int i=1 ;i<n ;i++){
            a[i]=v[i-1];
        }
    }
    else{
        a[n-1]=missing;
        for(int i=0 ;i<n-1 ;i++){
            a[i]=v[i+1];
        }        
    }
    pvec(a)
    ce;
}




}



}