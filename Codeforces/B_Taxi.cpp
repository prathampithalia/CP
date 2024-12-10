#include<bits/stdc++.h>

using namespace std;

#define all(a)   a.begin(), a.end()
#define fi       first
#define se       second
#define pb       push_back
#define pyes     cout << "YES" << endl
#define pno      cout << "NO" << endl
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
#define umap  unordered_map
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >



#define MIN(v)    *min_element(all(v))
#define MAX(v)    *max_element(all(v))
#define LB(c, x)  distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x)  distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n; cin >> n;
    vi f(5);

    forr(i, n) {
        int x; cin >> x;
        f[x]++;
    }

    int  a = 0;
    if (f[3]) {
        if (f[1] >= f[3]) {
            a += f[3];
            f[1] -= f[3];
            f[3] = 0;
        }
        else {
            a += f[3];
            f[1] = 0;
        }
    }


    if (f[2]) {

        if (f[2] % 2 == 0) {
            a += f[2] / 2;

            f[2] = 0;
        }
        else {
            a += f[2] / 2;
            f[2] = 1;
        }
    }

    if (f[1]) {

        a += f[1] / 4;

        f[1] = f[1] % 4;
        if (f[2]) {
            if (f[1] > 2) {
                a += 2;
            }
            else a++;
            f[1] = 0;
            f[2] = 0;
        }

    }
    if (f[2] == 1) {
        if (f[1] > 2) {
            a += 2;
        }
        else a++;
        f[1] = 0;
    }
    if (f[1])a++;

    cout << a + f[4];

}