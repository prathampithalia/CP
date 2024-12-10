// #include<bits/stdc++.h>
#include<vector>
#include<iostream>

using namespace std;

#define pb       push_back
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


vector<vector<int>> p(11001);


void calc(int c, vi& p) {
    for (int j = 1; j * j <= c; j++) {
        if (c % j == 0) {
            p.pb(j);
            if ((c / j) != j)p.pb(c / j);
        }
    }
}

void solve() {
    int A, B, C; cin >> A >> B >> C;

    int ans = MOD, cnt = 0;
    int res[3];
    for (int c = 1; c <= 11000; c++) {

        int a1 = MOD, a2 = MOD;
        vi pm = p[c];
        cnt = abs(C - c);
        for (auto b : pm) {
            vi p1 = p[b];
            for (auto a : p1) {
                for (auto i : p[a]) {
                    ans = min(ans, cnt + abs(b - B) + abs(A - i));
                    if (ans == cnt + abs(b - B) + abs(A - i)) {
                        res[0] = i;
                        res[1] = b;
                        res[2] = c;
                    }
                }
            }

        }

    }

    cout << ans << endl;
    pvec(res); ce;

}



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);



    for (int i = 11000; i >= 1; i--) {
        vi a;

        for (int j = 1; j * j <= i; j++) {

            if (p[j].size() != 0 && i % j == 0) {
                for (auto k : p[j])a.pb(k);
                break;
            }
            else if (i % j == 0) {
                a.pb(j);
                if ((i / j) != j)a.pb(i / j);
            }
        }
        p[i] = a;
    }

    test_cases(U)solve();

}