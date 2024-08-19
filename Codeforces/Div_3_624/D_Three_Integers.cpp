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


void calc(int c, vi& p) {
    for (int j = 1; j * j <= c; j++) {
        if (c % j == 0) {
            p.pb(j);
            if ((c / j) != j)p.pb(c / j);
        }
    }
}


void solve() {
    int A, B, C; cin >> A >> B >> C;

    int ans = INT_MAX, cnt = 0;
    vi res(3);
    for (int c = C - B; c <= min(C + A, 10000); c++) {

        int a1 = INT_MAX, a2 = INT_MAX;
        vi p;
        calc(c, p);
        cnt = abs(C - c);

        for (auto b : p) {
            vi p1;
            calc(b, p1);

            for (auto a : p1) {
                for (int i = 1; i * i <= a; i++) {
                    if (a % i == 0 && a <= b) {
                        ans = min(ans, cnt + abs(b - B) + abs(A - i));
                        if (ans == cnt + abs(b - B) + abs(A - i)) {
                            res[0] = i;
                            res[1] = b;
                            res[2] = c;
                        }
                        if ((a / i) != i && a <= b) {
                            ans = min(ans, cnt + abs(b - B) + abs(A - (a / i)));
                            if (ans == cnt + abs(b - B) + abs(A - (a / i))) {
                                res[0] = (a / i);
                                res[1] = b;
                                res[2] = c;
                            }
                        }
                    }
                }
            }

        }

    }

    cout << ans << endl;
    pvec(res); ce;

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