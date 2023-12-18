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


bool compf(pair<int, int> a, pair<int, int> b) {

	if( a.first == b.first )return a.second <b.second ;
	else return a.first > b.first;

}



int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

test_cases(Y) {

	int n; cin >> n;
	vector<ll int> v(n);
	vector<int> p(n);

	//  all even or all odd
	ll int miniev = INT_MAX, miniod = INT_MAX;

	int cnt1 = 0, cnt0 = 0;
	for (int i = 0;i < n;i++) {
		cin >> v[i];
		if ((v[i] & 1)) { p[i] = 1; cnt1++; }

		if ((v[i] & 1)) miniod = min(miniod, v[i]);
		else miniev = min(miniev, v[i]);
	}

	cnt0 = n - cnt1;

	// pvec(p)
	// cout<< " : "<< miniev<<" "<<miniod ;
	// ce;

	if (miniod == 1 || cnt1 == n || cnt0 == n) pyes;
	else {
		if (min(miniev, miniod) % 2 == 1)pyes;
		else pno;
	}


}



}