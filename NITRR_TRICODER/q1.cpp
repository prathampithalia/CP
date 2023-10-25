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

test_cases(T){
    string s; cin>>s;

    int n=s.size();
    int st=INT_MAX;
    int e= INT_MIN;

    bool ok1=false;
    for(int i=0 ;i<n;i++){
        if(s[i]=='1') {ok1=true; break;}
    }

    if( ok1 ){

    for(int i=0 ;i<n ;i++){
        if( s[i]=='1'){
            st=min(st,i);
            e=max(e,i);
        }
    }

    // cout<<st<<" "<<e<<endl;
    int ans=0;
    for(int i=st ; i<=e ;i++)
    {
        if (s[i]=='0')ans++;
    }
    cout<<ans<<endl;
    }
    else cout<<0<<endl;
}




}