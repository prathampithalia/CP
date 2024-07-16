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



void solve() {
    int n; cin >> n;
    vi s(n);
    umap<int, minpq(int)> mp;

    int mx = 0;
    forr(i, n)
    {
        cin >> s[i];
        mp[s[i]].push(i);

        mx = max(mx, s[i]);
    }

    bool cond = true;
    vi v(n), t(n);
    for (int i = n - 1;i >= 0; i--) {
        int val = s[LB(s, s[i])];
        int  ind = mp[val].top();
        if (ind == i) {
            if (mp[val].size() == 1) {
                cond = false;
                break;
            }
            else {
                mp[val].pop();
                int x = ind;
                ind = mp[val].top();
                mp[val].pop();
                mp[val].push(i);
            }

        }
        else mp[val].pop();
        v[i] = ind + 1;
    }

    forr(i, n) {
        if ((i + 1) == v[i])cond = false;
    }

    if (cond) {
        pvec(v);ce;
    }
    else cout << -1 << endl;

}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    test_cases(y)solve();

}
