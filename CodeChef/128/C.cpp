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
#define ppair(x) each(i,x)cout<<i.first<<" "<<i.second<<endl;


#define ll long long
#define MOD 1000000007
#define test_cases(T) int T ; cin>>T ; while(T--)

// COMPARISON FUNCTIONS
bool compf(pair<int, int> a, pair<int, int> b) {
	if ( a.first == b.first )return a.second < b.second ;
	else return a.first > b.first;
}

bool lexcomp(pair<int, string> p1, pair<int, string> p2) {
	if (p1.first == p2.first) { return p1.second < p2.second;}
	return p1.first > p2.first;
}



#define int ll

signed main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0); cin.tie(0);

	test_cases(Y) {
		int n ; cin >> n;
		vector<int> v(n);

		int mx = 0 , max_ind = 0 ;
		forr(i, n) {
			cin >> v[i];
			mx = max(mx , v[i]);
			if (mx == v[i]) max_ind = i;
		}

		vector<int> incr(n) , small , indexx(n);


		int f = 0 , diff = 0;

		for (int i = 1 ; i < n ; i++) {
			if ( v[i] < v[i - 1]) {
				diff = max(diff , v[i - 1] - v[i]);
				small.push_back(i);
			}
		}

		bool  flag = false ;
		int how = 0 ;
		if ( is_sorted(all(v))) flag = true ;

		forr(i, small.size()) {
			v[ small[i]] += diff;
		}


		if (is_sorted(all(v))) flag = true ;

		if (flag) {
			pyes;
		}
		else pno;

	}



}