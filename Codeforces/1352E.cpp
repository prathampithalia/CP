
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

test_cases(Y) {
	int n; cin >> n;
	int t[n + 1] {0};
	vector<int> v(n);

	vector<int> p(n + 1);
	forr(i, n) {
		cin >> v[i];
		p[i + 1] = p[i] + v[i];
	}


	for (int i = 0; i < n; ++i)
		for (int j = i + 2; j <= n; ++j)
			if (p[j] - p[i] <= n)
				t[p[j] - p[i]] = true;
	int ans = 0;
	for (auto i : v)
		ans += t[i];

	cout << ans << endl;

}



}