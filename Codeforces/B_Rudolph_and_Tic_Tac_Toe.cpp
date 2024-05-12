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



bool ans(vector<vector<char>>& v, char x) {
    // row check

    forr(i, 3) {
        if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] == x) return true;
    }
    // column check
    forr(i, 3) {
        if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] == x) return true;
    }

    // diagonal
    if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[1][1] == x) return true;
    if (v[2][0] == v[1][1] && v[1][1] == v[0][2] && v[1][1] == x) return true;

    return false;

}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y) {
        vector<vector<char>> v(3, vector<char>(3, '0'));

        for (int i = 0; i < 3; i++) {
            forr(j, 3) { cin >> v[i][j]; }
        }

        // pvec2d(v) ce;

        if (ans(v, 'X')) cout << 'X';
        else if (ans(v, '+')) cout << '+';
        else if (ans(v, 'O')) cout << 'O';
        else cout << "DRAW";

        ce;

    }


}