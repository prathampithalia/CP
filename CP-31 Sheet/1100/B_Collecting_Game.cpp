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
#define ll long long
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)


bool compf(pair<int, int> a, pair<int, int> b) {

    if ( a.first == b.first )return a.second < b.second ;
    else return a.first > b.first;

}

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

        // vector<pair<ll int , ll int>> v(n);
        pair<int, int> v[n];
        forr(i, n) {
            cin >> v[i].fi;
            v[i].se = i;
        }

        // sort(all(v));

        sort(v, v + n);

        int A[n];
        int tot = v[0].fi ;
        int j = 0 ;
        for (int i = 0 ; i < n ; i++) {

            while (j < i) {
                j++;
                tot += v[j].fi ;
            }

            while ( j + 1 < n  && tot >= v[j + 1].fi) {
                j++;
                tot += v[j].fi ;
            }

            A[v[i].se] = j;
        }

        pvec(A) ce;


    }




}