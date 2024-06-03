
// #include <iostream>
#include<bits/stdc++.h>
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


#define int ll


signed main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


    test_cases(Y) {
        int n; cin >> n;
        vector<int> v(n);
        forr(i, n)cin >> v[i];

        vector<int> g, k;

        forr(i, n - 1)k.pb(__gcd(v[i], v[i + 1]));

        g.pb(0);
        int ind = 0;

        for (int i = 0; i < n - 1; i++) {
            int gg = __gcd(v[i], v[i + 1]);

            if (gg < g.back()) {
                ind = i + 1;
                break;
            }
            else g.pb(gg);
        }

        vector<int> v1, v2, v3;
        // v1 remove ind
        forr(i, ind)v1.pb(v[i]);
        for (int i = ind + 1; i < n;i++)v1.pb(v[i]);

        forr(i, ind - 1)v2.pb(v[i]);
        for (int i = ind; i < n;i++)v2.pb(v[i]);


        if (ind - 2 >= 0) {
            forr(i, ind - 2)v3.pb(v[i]);
            for (int i = ind - 1; i < n;i++)v3.pb(v[i]);
        }

        vector<int> g1, g2, g3;
        forr(i, n - 2)g1.pb(__gcd(v1[i], v1[i + 1]));
        forr(i, n - 2)g2.pb(__gcd(v2[i], v2[i + 1]));
        if (v3.size() > 1) {
            forr(i, n - 2)g3.pb(__gcd(v3[i], v3[i + 1]));

        }
        if (is_sorted(all(g1)) || is_sorted(all(g2))) pyes;
        else if (g3.size() > 0 && is_sorted(all(g3))) pyes;
        else pno;

        // debug(k,g1,g2,g3) ;

    }


}