
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
	int n; cin>>n;
	vector<int> v(n);
	forr(i,n)cin>>v[i];

	int a1 = -1  , b1 = -1 , a2= -1 , b2= -1;
	int elem=0;
	for(int i=0 ;i<n ; i++){
		for(int j=i+1 ; j<n ;j++){
			if( v[i] == v[j] && a1== -1 && b1 == -1){ elem = v[i] ;
            a1 = i ; b1 = j ;
            break;
            }
			if( v[i] == v[j] && v[i]!=elem && a1 != -1 && b1 != -1 ){
                a2 = i ; b2 = j ;  break;}

		}
	}

vector<int> ans(n,1);
// cout<<a1<<','<<b1<<" : "<<a2<<','<<b2<<endl;
if( (a2 == -1 && b2 == -1) ) cout<< -1 <<endl;
else {
	ans[a1]=1;
	ans[b1]=2;
	ans[a2]=1;
	ans[b2]=3;
pvec(ans)
	ce;
}

}
	
}