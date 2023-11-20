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

int n , k ; cin>>n>>k;

vector<int> t(n);

	int mx=INT_MIN;
    bool ok=false;
    int cur1 = INT_MAX ;

for(int i=0 ; i<k ; i++){
	int elem ; cin>>elem ;
	t[elem-1]++ ;

    int cur2= 0;

	for(int j=0 ;j<n ;j++){
        mx=max(mx , t[j]);
	}
    for(int jj=0 ;jj<n ;jj++){
        if( t[jj] == mx ){
            cur1= min(cur1 , jj+1 ) ;
        }
    }
    cout<< cur1<<endl;

    mx=INT_MIN;
    cur1=INT_MAX;
}



}