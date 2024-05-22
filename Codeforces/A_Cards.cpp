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
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (n,0)); forr(i, n)forr(j, n) cin >> v[i][j];



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

    int n; cin >> n;
    vector<int> v(n);

    int a = INT_MAX, b = INT_MIN;
    vector<int> t(n);
    int tot = 0;
    forr(i, n) {
        cin >> v[i];
        a = min(a, v[i]);
        b = max(b, v[i]);
        // tot += v[i];
    }
    tot = a + b;
    // tot = tot/n ;
    // tot *= 2; 
    // cout << tot << endl;

    for (int i = 0;i < n; i++) {
        if (t[i] == 0)
        {
            cout << i + 1 << ' ';
            t[i] = 1;

            for (int j = 0; j < n; j++) {
                if (tot - v[i] == v[j] && t[j] == 0) {
                    cout << j + 1 << endl;
                    t[j] = 1;
                    break;
                }
            }
        }
    }





}