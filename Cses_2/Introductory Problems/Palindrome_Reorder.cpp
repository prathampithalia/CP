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
    freopen("code/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    map<char, int> f;
    for (auto i : s) {
        f[i]++;
    }
    int odd = 0;
    char odd_char;
    for (auto i : f) {
        if (i.second & 1)
        {
            odd++;
            odd_char = i.first;
        }
    }

    if (odd > 1) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        int n = s.size();
        vector<char> ans(n);
        if (!(n & 1))
        {
            if (odd == 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            else {
                int l = 0, r = n - 1;

                for (auto& i : f) {
                    while (i.second != 0) {
                        ans[l] = i.fi;
                        ans[r] = i.fi;
                        l++;
                        r--;
                        i.se -= 2;
                    }
                }
                for (auto i : ans)cout << i;

                ce;
            }
        }
        else {
            if (odd == 1) {
                int mid = n / 2;
                deque<char> ans;
                while (f[odd_char] != 0) {
                    ans.pb(odd_char);
                    f[odd_char]--;
                }
                f.erase(odd_char);
                for (auto& i : f) {
                    while (i.se != 0) {
                        ans.push_front(i.fi);
                        ans.push_back(i.fi);
                        i.se -= 2;
                    }
                }
                for (auto i : ans)cout << i;
            }
            else {
                cout << "NO SOLUTION" << endl;
            }


        }

    }

}
