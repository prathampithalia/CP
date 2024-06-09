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

test_cases(u) {
    int n; cin >> n;
    vector<int> v(n), p(n);
    set<int> s;
    forr(i, n) {
        cin >> v[i];
        if (i == 0) {
            p[i] = v[i];
        }
        else {
            p[i] = p[i - 1] + v[i];
        }
        s.insert(v[i]);
    }

    bool ug = false;

    for (int i = 1; i < n; i++) {
        if (v[i] == p[i - 1])ug = true;
    }

    if (!ug) {
        pyes;
        pvec(v);ce;
    }
    else {
        reverse(all(v));
        if (s.size() == 1)pno;
        else {
            if (n > 2 && v[0] == v[1]) {
                for (int i = 2; i < n; i++) {
                    if (v[0] != v[i]) {
                        swap(v[0], v[i]);
                        break;
                    }
                }
            }
            pyes;
            pvec(v);ce;
        }
    }

}


}