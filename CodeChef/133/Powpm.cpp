
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


    test_cases(U) {
        int n; cin >> n;
        vector<int> v(n);

        bool one = false;
        int c1 = 0;

        forr(i, n)
        {
            cin >> v[i];
            if (v[i] == 1) {
                c1++;
                one = true;
            }
        }

        // pvec(v); ce;
        //  we just count till index 30
        //  when vi == 1: SPECIAL CASE

        int ans = 0;
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < min(n, (ll)31); j++) {
                if (pow(v[i], j + 1) <= v[j] && v[i] != 1) {
                    ans++;
                    // cout<<i<<' '<<j <<endl;
                }
            }
        }

        int a2 = 0;
        if (one) {
            a2 = (n)*c1;
        }
        cout << ans + a2 << endl;
        // ce;
    }


}