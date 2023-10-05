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



string s; cin>>s;

// vowel after every consonant
// any leter after any vowel


int n=s.size();

vector<int> v(n);


for(int i=0 ;i<n;i++){

if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){ v[i]=1;}
if( s[i]=='n' ) { v[i]=2; }

}

bool ok=false, flag=true;

for(int i=0 ; i<n-1 ; i++ ){
    
    if(v[i] == 2 && v[i+1]==0 )ok=true;
    if(v[i] == 2 && v[i+1]==2 )ok=true;
    if(v[i] == 0 && v[i+1]==1 )ok=true;
    if(v[i] == 0 && v[i+1]==0 )flag=false;
    if(v[i] == 0 && v[i+1]==2 )flag=false;

}


if (n == 1)
{
    if( s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u' || s[0]=='n'){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

else cout << (ok && flag ? "YES" : "NO") << endl;


}