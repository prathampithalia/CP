#include<bits/stdc++.h>

using namespace std;

#define all(a)   a.begin(), a.end()
#define fi       first
#define se       second
#define pb       push_back
#define pyes     cout << "YES" << endl
#define pno      cout << "NO" << endl
#define ce       cout << endl
#define forr(i, n) for (int i = 0; i < n; i++)
#define each(a, x) for (auto & a: x)
#define pvec(x)    for (auto & a: x) { cout << a << " ";}
#define pvec2d(v)  for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}
#define ppair(x)   each(i, x) cout << i.first << " " << i.second << endl;

#define ll    long long
#define MOD   1000000007
#define vec(v,n,int)     vector<int> v(n) ; forr(i,n)cin>>v[i];
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (m,0)); forr(i, n)forr(j, m) cin >> v[i][j];
#define test_cases(T) int T; cin >> T; while (T--)

#define pii   pair<int,int>
#define vi    vector<int>
#define vpi   vector<pair<int,int>>
#define umap  unordered_map
#define maxpq(int) priority_queue<int>
#define minpq(int) priority_queue<int, vector<int>, greater<int> >



#define MIN(v)    *min_element(all(v))
#define MAX(v)    *max_element(all(v))
#define LB(c, x)  distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x)  distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

#define int ll

signed main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);




	test_cases(Y) {
		int n ; cin >> n;
		vi A(n) , B(n);

		forr(i, n)cin >> A[i];
		forr(i, n)cin >> B[i];

		umap<int, int> mpa , mpb;

		int c1 = 0 ;

		for (int i = 0 ; i < n-1 ; i++) {
			if (A[i] == A[i + 1]) {
				c1++;
				mpa[A[i]] = max(c1, mpa[A[i]]);
				mpa[A[i]] = max(c1 + 1, mpa[A[i]]);
			}
			else  {
				mpa[A[i]] = max(1LL, mpa[A[i]]);
				c1 = 0 ;
			}
		}
		mpa[A[n - 1]] = max({c1, mpa[A[n - 1]],1LL});

		c1 = 0;
		for (int i = 0 ; i < n-1 ; i++) {
			if (B[i] == B[i + 1]) {
				c1++;
				mpb[B[i]] = max(c1 + 1, mpb[B[i]]);
			}
			else {
				mpb[B[i]] = max(1LL, mpb[B[i]]);
				c1 = 0 ;
			}
		}
		mpb[B[n - 1]] = max({c1, mpb[B[n - 1]],1LL});



		int ans = 0 ;
		for (int i = 0 ; i < n ; i++) {
			ans = max(ans, mpa[A[i]] + mpb[A[i]]);
			ans = max(ans, mpa[B[i]] + mpb[B[i]]);
		}
		// debug(mpa,mpb,ans);

		cout << ans << endl;
	}


}
