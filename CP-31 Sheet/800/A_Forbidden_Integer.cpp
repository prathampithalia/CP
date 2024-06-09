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

#define int ll

bool isgood(vector<int>& v) {

    forr(i, v.size() - 1) {
        if (v[i] == v[i + 1])return false;
    }
    return true;
}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y) {
        int n, k, x; cin >> n >> k >> x;


        if (x == 1 && k == 1)pno;
        else if (x != 1 && k > 1) {
            pyes;
            cout << n << endl;
            forr(i, n)cout << 1 << ' ';
            ce;
        }
        else if (n % 2 == 1 && k == 2 && x == 1)pno;
        else if (n % 2 == 0 && k == 2 && x == 1) {
            pyes;
            cout << n / 2 << endl;
            forr(i, n / 2)cout << 2 << ' ';
            ce;
        }
        else if (x == 1 && n == k) {
            pyes;
            cout << 1 << endl << n << endl;
        }
        else if (x == 1) {
            pyes;
            int T = (n - 3) / 2;
            if (n % 2 == 0) T = n / 2;
            cout << T + (n & 1) << endl;
            forr(i, T)cout << 2 << ' ';
            if (n & 1)cout << 3 << endl;
        }


    }


}