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
#define test_cases(T) int T; cin >> T; while (T--)

#define int ll 

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c; cin >> a >> b >> c;

    // pow(a,c) < > = pow(b,c)

    if (a >= 0 && b >= 0) {
        if (a > b) cout << '>';
        else if (a < b) cout << '<';
        else cout << '=';
    }
    else if (a >= 0 && b <= 0) {
        if (a > abs(b)) {
            cout << '>';
        }
        else if (a < abs(b)) {
            if (c % 2)cout << '>';
            else cout << '<';
        }
        else {
            if (c % 2)cout << '>';
            else cout << '=';
        }
    }

    else if (a <= 0 && b >= 0) {
        if (b > abs(a)) cout << '<';
        else if (b < abs(a)) {
            if (c % 2)cout << '<';
            else  cout << '>';
        }
        else {
            if (c % 2) cout << '<';
            else cout << '=';
        }
    }
    else cout << '=';

}