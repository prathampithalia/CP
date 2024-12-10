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



signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    // same color blocks

    vector<pair<int, pii>> v;
    stack<int> x;
    int len = 0;

    string P = "RGB";

    int start = 0, last = n - 1;
    forr(i, n) {
        if (x.size() == 0) {
            x.push(s[i]);
            len++;
        }
        else {
            if (x.top() == s[i]) {
                len++;
                last = i;
            }
            else {
                v.pb({ len,{start , last} });
                len = 1;
                start = i;
                x.pop();
                x.push(s[i]);
            }
        }
    }

    if (len)v.pb({ len,{start , last} });


    int ans = 0;
    forr(i, v.size()) {
        ans += (v[i].first / 2);
        if (v[i].first > 1) {
            char up = s[v[i].se.fi], t;
            for (auto k : P) {
                if (up != k) {
                    if (v[i].se.se + 1 <= n - 1 && s[v[i].se.se + 1] != k) {
                        t = k;
                    }
                    if (v[i].se.se + 1 > n - 1) {
                        t = k;
                    }

                }
            }
            for (int j = v[i].se.fi + 1; j <= v[i].se.se; j += 2) {
                s[j] = t;
            }
        }
    }

    cout << ans << endl << s;


}
