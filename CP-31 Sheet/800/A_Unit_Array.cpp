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
        int n; cin >> n;
        //  total >=0 && prod == 1
        //  -1 can only change the prod && -1 count should be even
        // && cnt of minus shoud be <= count of 1

        vector<int> v(n);
        int N = 0, P = 0;
        forr(i, n)
        {
            cin >> v[i];
            if (v[i] == 1) P++;
            else N++;
        }
        // cout << N<<' '<<P<<endl;

        if (N == P) cout << ((N & 1) ? 1 : 0) << endl;
        else if (N > P) {
            int A = N - n / 2;
            cout << A + ((n / 2) & 1) << endl;
        }
        else {
            cout << ((N & 1) ? 1 : 0) << endl;
        }

    }

}