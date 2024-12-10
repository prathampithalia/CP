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
#define each(a, x) for (auto & a: x)
#define pvec(x) for (auto & a: x) { cout << a << " ";}
#define pvec2d(v) for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}
#define ppair(x) each(i, x) cout << i.first << " " << i.second << endl;

#define ll long long
#define MOD 1000000007
#define test_cases(T) int T; cin >> T; while (T--)
#define vec(v,n,int) vector<int> v(n) ; forr(i,n)cin>>v[i];
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (m,0)); forr(i, n)forr(j, m) cin >> v[i][j];





signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y) {
        int a, b, c; cin >> a >> b >> c;

        //  a : 0 , b : 1 , c : 3 ;

        string s = "";
        if (a == 0 && c == 0 && b != 0) {
            if (b % 2 == 0) {
                forr(i, b / 2) s += "01";

                s += '0';
            }
            else {
                forr(i, (b + 1) / 2)s += "01";
            }
        }
        else if (a == 0 && b == 0 && c != 0) {
            forr(i, c + 1) s += '1';
        }
        else if (c == 0 && b == 0 && a != 0) {
            forr(i, a + 1) s += '0';
        }

        else if (a == 0 && b != 0 && c != 0) {

            if (b % 2 == 0) {
                forr(i, c + 1) s += '1';
                forr(i, b / 2) s += "01";
            }
            else {
                s += '0';
                forr(i, c + 1) s += '1';
                forr(i, b / 2) s += "01";
            }
        }
        else if (a != 0 && b != 0 && c == 0) {
            forr(i, a) s += '0';
            forr(i, (b + 1) / 2) s += "01";
            if (b % 2 == 0)s += '0';
        }

        else {
            forr(i, a + 1) s += '0';
            forr(i, c + 1) s += '1';
            b--;
            forr(i, b / 2) s += "01";
            if (b & 1) s += '0';
        }

        cout << s << endl;

    }

}