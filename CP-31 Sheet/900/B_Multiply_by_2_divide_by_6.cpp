#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
	int N; cin >> N;

	int cnt = 0;
	bool f = true;
	int t = N;

	while (N != 1 && f) {
		if (N % 6 == 0) N /= 6;
		else N *= 2;

		if (N > t * 6) {
			f = false;
		}
		cnt++;
	}

	cout << (f ? cnt : -1) << endl;


}

signed main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}