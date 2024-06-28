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
#define maxpq(int) priority_queue<int>
#define minpq(int) priority_queue<int, vector<int>, greater<int> >



#define MIN(v)    *min_element(all(v))
#define MAX(v)    *max_element(all(v))
#define LB(c, x)  distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x)  distance((c).begin(), upper_bound(all(c), (x)))

#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

#define int ll

void solve() {
    int n; cin >> n;
    vi v(n);


    vector<vector<int>> div(n);
    vi p(n + 1), rem;

    forr(i, n) {
        cin >> v[i];
        if (v[i] <= n && p[v[i]] == 0)p[v[i]] = v[i];
        else {

            int k = v[i];
            while (k) {
                div[i].pb(k);
                k /= 2;
            }
        }
    }

    // debug(div,p);

    vi t(n);
    // Search the remaining

    for (int i = n;i > 0; i--) {

        if (p[i] == 0) {
            bool f = false;
            for (int j = 0;j < n; j++) {
                if (t[j] == 0) {
                    for (int k = 0; k < div[j].size(); k++) {
                        if (div[j][k] == i) {
                            p[i] = i;
                            t[j] = 1;
                            f = true;
                            break;
                        }
                    }
                    if (f) break;
                }
            }
        }
    }

    // debug(div,p);

    bool ans = true;
    for (int i = 1; i <= n; i++) {
        if (p[i] == 0)ans = false;
    }

    cout << (ans ? "YES" : "NO") << endl;




}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    test_cases(U)solve();

}