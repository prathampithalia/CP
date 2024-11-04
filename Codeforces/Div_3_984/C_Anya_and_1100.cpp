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
    string s; cin >> s;
    int n = s.size();
    int q;
    cin >> q;

    if (s.size() > 3) {
        map<int, int> mp;
        for (int i = 0;i < n - 3;i++) {
            if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
                mp[i]++;
            }
        }
        while (q--) {
            int ind; cin >> ind;
            char c; cin >> c;
            ind--;

            if (c == '1') {
                bool ok = true;
                //  affected ;
                if (mp.find(ind - 2) != mp.end()) {
                    mp.erase(ind - 2);
                }
                else if (mp.find(ind - 3) != mp.end()) {
                    mp.erase(ind - 3);
                }
                s[ind] = c;

                if (ind - 1 >= 0 && ind + 2 < n) {
                    if (s[ind - 1] == '1' && s[ind] == '1' && s[ind + 1] == '0' && s[ind + 2] == '0')mp[ind - 1]++;
                }
                if (ind + 3 < n) {
                    if (s[ind] == '1' && s[ind + 1] == '1' && s[ind + 2] == '0' && s[ind + 3] == '0')mp[ind]++;
                }
                if ((int)mp.size())pyes;
                else pno;

            }
            else {
                bool ok = true;
                if (mp.find(ind) != mp.end()) {
                    mp.erase(ind);
                }
                else if (mp.find(ind - 1) != mp.end()) {
                    mp.erase(ind - 1);
                }
                s[ind] = c;
                if (ind - 2 >= 0 && ind + 1 < n) {
                    if (s[ind] == '0' && s[ind + 1] == '0' && s[ind - 1] == '1' && s[ind - 2] == '1')mp[ind - 2]++;
                }
                if (ind - 3 >= 0) {
                    if (s[ind] == '0' && s[ind - 1] == '0' && s[ind - 2] == '1' && s[ind - 3] == '1')mp[ind - 3]++;
                }

                if ((int)mp.size())pyes;
                else pno;

            }

        }

    }
    else {
        while (q--) {
            int ind; cin >> ind;
            char c; cin >> c;
            pno;
        }
    }



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