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


int n; cin>>n;
vector<int> v(n);

bool lp_check = false;
forr(i,n){cin>>v[i]; if( v[i]==29) v[i]--;}

vector<int> year{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 
				31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 
				31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 
				31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 
				31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool ok = false ;
int j=0;
int mx=INT_MIN ;
for(int i=0 ; i < year.size(); i++){
    if( year[i] == v[j] ){
        // cout<<year[i%12]<<" " ;
        // if( mx == n) break;
        j++;
        mx = max(mx , j);
    }
    else {
        // if( i>= 12) i++;
        // i++;
        j=0 ;
    }
}

// cout<<endl<<j<<endl;
if(mx >= n) cout<<"Yes";
else cout<<"No";
}