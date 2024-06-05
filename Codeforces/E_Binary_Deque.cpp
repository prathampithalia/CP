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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int one = 0, zero = 0;
        vector<int> p(n);
        forr(i, n) {
            cin >> v[i];
        }

        // Dont think of removing first or last element
        // Approach is to get max length of subarray having sum == k
        int ans = INT_MAX;
        int j = 0, tot = 0;
        for (int i = 0; i < n; i++)
        {
            while (j < n && v[j] + tot <= k) {
                tot += v[j];
                j++;
            }
            if (tot == k) ans = min(ans, (n - j) + i);
            tot -= v[i];
        }
        if (ans != INT_MAX) cout << ans << endl;
        else cout << -1 << endl;
    }


}