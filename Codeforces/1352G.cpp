
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


test_cases(__) {
	int n; cin >> n;

	if ( n <= 3 ) { cout << -1 << endl;}
	else {

		if ( n % 2 == 0) {
			for (int i = n - 1 ; i >= 0 ; i = i - 2) {
				cout << i << " ";
			}

			cout << 4 << " " << 2 << " ";
			for (int i = 6 ; i <= n ; i += 2) {
				cout << i << " ";
			}
		}
		else {

			for (int i = n ; i > 0 ; i = i - 2) {
				cout << i << " ";
			}

			cout << 4 << " " << 2 << " ";
			for (int i = 6 ; i < n ; i += 2) {
				cout << i << " ";
			}

		}

		ce;
	}


}
}
