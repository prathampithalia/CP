#include<bits/stdc++.h>

using namespace std;

#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
#define ce cout << endl
#define forr(i, n) for (int i = 0; i < n; i++)
#define pvec(x) for (auto & a: x) { cout << a << " ";}
#define pvec2d(v) for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}

#define each(a, x) for (auto & a: x)
#define ppair(x) each(i, x) cout << i.first << " " << i.second << endl;

#define ll long long
#define MOD 1000000007
#define int ll 
#define test_cases(T) int T; cin >> T; while (T--)

bool pal(string s){
	forr(i ,s.size()/2){
		if( s[i] != s[s.size() - 1-i]) return false;
	}

	return true ;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    string s, t; cin >> s >> t;

    forr(i, 3) {
        t[i] = tolower(t[i]);
    }

    // subsequence order
    if (t[2] == 'x')t.pop_back();
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[j]) {
            j++;
        }
    }
    if (t.size() == j) cout << "Yes" << endl;
    else cout << "No" << endl;

}