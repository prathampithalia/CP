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



#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif





signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(U) {
        int n, m; cin >> n >> m;
        vec2d(v, n, m, char);

        forr(j, m) {
            forr(i, n) {

                bool stone = true;
                if (v[i][j] == '*') {
                    v[i][j] = '.';
                    int ii = i, jj = j, dot = ii, sto = n;

                    // search last before 'o' or end
                    for (int r = i; r < n; r++) {
                        if (v[r][j] == 'o') {
                            sto = r;
                            stone = false;
                            break;
                        }
                        if (v[r][j] == '.' && stone)dot = r;
                        if (r == n - 1 && stone && v[r][j] == '.') {
                            ii = n - 1;
                            // break;
                        }
                    }
                    if (ii != n - 1) v[min(dot, sto - 1)][j] = '*';
                    else v[ii][j] = '*';
                }

            }

        }

        forr(i, n) {
            forr(j, m)cout << v[i][j];
            ce;
        }
        ce;

    }




}