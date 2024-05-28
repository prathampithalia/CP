#include <iostream>
#include <vector>
using namespace std;

#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl
#define ce cout<<endl
#define forr(i,n) for(int i=0 ; i<n ; i++)
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}

#define each(a, x) for (auto &a : x)
#define ppair(x) each(i,x)cout<<i.first<<" "<<i.second<<endl;

#define ll long long
#define MOD 1000000007
#define test_cases(T) int T ; cin>>T ; while(T--)

const int N = 1e4 + 1;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        int k; cin >> k;
        int n = 4 * k;
        vector<int> v(n), mp(N);
        forr(i, n) {
            cin >> v[i];
            mp[v[i]]++;
        }

        bool ans = true;

        vector<int> a;
        forr(i, mp.size()) {
            if (mp[i] % 2 != 0) {
                ans = false;
                break;
            }
            forr(j, mp[i] / 2) a.pb(i);
        }

        int m = a.size();
        if (m % 2 != 0 || m != k * 2) {
            pno;
            continue;
        }

        int prod = a[0] * a[m - 1];
        for (int i = 0; i < m; i++) {
            if (a[i] * a[m - 1 - i] != prod) {
                ans = false;
                break;
            }
        }

        if (ans) pyes;
        else pno;
    }
}