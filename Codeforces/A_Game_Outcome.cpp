#include<bits/stdc++.h>

using namespace std;


#define forr(i, n) for (int i = 0; i < n; i++)

#define ll    long long
#define MOD   1000000007
#define vec(v,n,int)     vector<int> v(n) ; forr(i,n)cin>>v[i];
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (m,0)); forr(i, n)forr(j, m) cin >> v[i][j];
#define test_cases(T) int T; cin >> T; while (T--)


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vec2d(v, n, n, int);

    int ans = 0;
    for (int i = 0;i < n; i++) {
        //  row 
        int r1 = 0;
        for (int j = 0; j < n; j++) {
            r1 += v[i][j];
        }

        // col
        for (int x = 0; x < n;x++) {
            int c1 = 0;
            for (int y = 0; y < n; y++) {
                c1 += v[y][x];
            }
            if (c1 > r1) ans++;
        }

    }

    cout << ans;


}