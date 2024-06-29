#include<iostream>

using namespace std;

#define pyes     cout << "YES" << endl
#define pno      cout << "NO" << endl
#define ce       cout << endl
#define forr(i, n) for (int i = 0; i < n; i++)
#define each(a, x) for (auto & a: x)
#define pvec(x)    for (auto & a: x) { cout << a << " ";}
#define pvec2d(v)  for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}
#define ppair(x)   each(i, x) cout << i.first << " " << i.second << endl;

#define test_cases(T) int T; cin >> T; while (T--)



void solve() {
    int n, a, q;cin >> n >> a >> q;
    string s; cin >> s;

    if (n == a) cout << "YES" << endl;
    else {
        bool ps = false;
        int sure = 0;
        for (auto i : s) {
            if (i == '-') sure--;
            else sure++;
            if (a + sure >= n)ps = true;
        }
        if (a + sure >= n || ps)pyes;

        else {

            int maybe = 0;
            for (auto i : s) {
                if (i == '+')maybe++;
            }
            if (a + maybe >= n) cout << "MAYBE";
            else cout << "NO";
            ce;


        }

    }

}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y)solve();


}