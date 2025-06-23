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

#define  pqi pair<int,pair<int,int>> 
#define int ll 
void solve() {

    int n, Q;
    cin >> n >> Q;

    vector<vector<char>> v(2, vector<char>(n));

    minpq(pqi) pq;

    forr(i, 2) {
        forr(j, n) {
            cin >> v[i][j];
            if (v[i][j] == '0') {
                pq.push({ 0,{i,j} });
            }
        }
    }

    if (pq.size() >= (n)) {
        cout << -1 << endl;
        return;
    }


    vector<int> r1(n, 1e15), r2(n, 1e15);

    int cnt = 0;
    minpq(int) ind;
    for (int i = 0; i < n; i++) {

        if (v[0][i] == '0') {
            ind.push(i);
            cnt++;
        }
        else {
            if (ind.size()) {
                int index = ind.top();
                ind.pop();
                r1[index] = i - index;
                swap(v[0][index], v[0][i]);
                ind.push(i);
            }
            else r1[i] = 0;
        }

    }

    priority_queue<int> qq;
    for (int i = n - 1; i >= 0;i--) {
        if (v[1][i] == '0') {
            qq.push(i);
        }
        else {
            if (qq.size()) {
                int index = qq.top();
                qq.pop();
                r2[index] = index - i;
                swap(v[1][index], v[1][i]);
                qq.push(i);
            }
            else r2[i] = 0;
        }
    }

    for (int i = 1; i < n; i++) {
        r1[i] += r1[i - 1];
    }
    for (int i = n - 2; i >= 0;i--) {
        r2[i] += r2[i + 1];
    }

    int ans = 1e15;
    for (int i = 0; i < n; i++) {
        if (v[0][i] == '1' && v[1][i] == '1')
            ans = min(ans, r1[i] + r2[i]);
    }


    cout << (ans >= 1e15 ? -1 : ans) << endl;



}


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    test_cases(U) {
        solve();
    }


}