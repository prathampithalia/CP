// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl
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
    string s; cin>>s;
    int n=s.size();

    int ab=0 , ba=0;
    for(int i=0;i<n-1;i++){
        if( s[i]=='a' && s[i+1]=='b')ab++;
        if( s[i]=='b' && s[i+1]=='a')ba++;
    }

    // cout<<ab<<" "<<ba<<endl;
    //  if( ab > ba ){
    //     for(int i=0 ; i<n-1;i++){
    //         if( ab>=ba && s[i]=='a' && s[i+1]=='b'){
    //             s[i]='b';
    //             ab--;
    //         }

    //     }
    // }
    // else if( ab < ba ){
    //     for(int i=0 ; i<n-1;i++){
    //         if( ab<= ba && s[i]=='b' && s[i+1]=='a'){
    //             s[i]='a';
    //             ab--;
    //         }

    //     }
    // }

    if( ab > ba){

        for(int i=0 ; i<n;i++){
            if( s[i]=='a' && s[i+1]=='b' ){
                if( ab !=ba) s[i]='b';
                ab--;
                if( ab== ba) break;
            }
        }
    }

    if(ba > ab ){

        for(int i=0 ; i<n;i++){
            if( s[i]=='b' && s[i+1]=='a' ){
                if( ab !=ba) s[i]='a';
                ba--;
                if( ab== ba) break;
            }
        }
    }
cout<<s<<endl;

}



}