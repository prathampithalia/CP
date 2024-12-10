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


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

#define int ll

void solve() {
    int n; cin >> n;

    vi v(n), pref(n + 1);

    forr(i, n) {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }

    // pvec(pref);ce;

    priority_queue<pair<int, pii>, vector<pair<int, pii>>, greater<pair<int, pii>>> pq;

    string s; cin >> s;
    int l = 0, r = n - 1;

    int fsr = INT_MIN, fsl = INT_MAX;

    while (l < r) {
        if (s[l] == 'L') {
            fsl = min(fsl, l);
            bool fnd = false;
            while (r > l) {
                if (s[r] == 'R') {
                    fsr = max(fsr, r);
                    fnd = true;
                    break;
                }
                r--;
            }
            if (fnd)
            {
                pq.push({ r - l , {l,r} });
                r--;
            }
        }
        l++;
    }

    int tot = 0;
    while (pq.size()) {
        int x = pq.top().se.fi;
        int y = pq.top().se.se;
        if (x != fsl && y != fsr && x < y) tot += (pref[y + 1] - pref[x]);
        if (x == fsl && y == fsr && x < y) tot += (pref[y + 1] - pref[x]);
        pq.pop();

    }

    cout << tot << endl;


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