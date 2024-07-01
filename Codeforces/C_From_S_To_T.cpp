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


#define ll    long long
#define MOD   1000000007
#define vec(v,n,int)     vector<int> v(n) ; forr(i,n)cin>>v[i];
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (m,0)); forr(i, n)forr(j, m) cin >> v[i][j];
#define test_cases(T) int T; cin >> T; while (T--)

#define pii   pair<int,int>
#define vi    vector<int>


bool is_subsequence(string s, string t) {
    int j = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[j])j++;
    }
    if (j == s.size()) return true;

    return false;
}


void solve() {
    string  s, t, p; cin >> s >> t >> p;
    int m = 26;
    vi ss(m), tt(m), pp(m), r(m);
    for (auto i : s) { ss[i - 'a']++; }
    for (auto i : t) { tt[i - 'a']++; }
    for (auto i : p) { pp[i - 'a']++; }

    bool neg = false;

    for (int i = 0; i < m; i++) {
        r[i] = tt[i] - ss[i];
        if (r[i] < 0) neg = true;
    }
    if (neg) {
        pno;
        return;
    }
    bool F = true;
    for (int i = 0; i < m; i++) {
        if (pp[i] < r[i]) F = false;
    }
    if (!F) {
        pno;
        return;
    }

    //  order of string using subsequence
    if (is_subsequence(s, t))pyes;
    else pno;
}






signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y)solve();


}