#include<iostream>
using namespace std;
#define test_cases(T) int T; cin >> T; while (T--)


signed main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	test_cases(Y) {
		int x, k; cin >> x >> k;

		if (x % k)cout << 1 << endl << x << endl;
		else {
			cout << 2 << endl;
			cout << x - k - 1 << ' ' << k + 1 << endl;
		}

	}


}