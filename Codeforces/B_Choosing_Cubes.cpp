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


#ifndef ONLINE_JUDGE
#include "template.cpp" 
#else
#define debug(...)
#define debugArr(...):
#endif 




signed main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        int n, f, k; cin >> n >> f >> k;
        vector<int> a(n);

        forr(i, n)cin >> a[i];
        int fav = a[f - 1];

        sort(a.rbegin(), a.rend());

        // pvec(a) ; ce;
        bool ans = true, pos = false;
        int cnt = 0;
        for (int i = 0; i < k; i++) {
            if (a[i] == fav)pos = true;
        }
        for (int i = k;i < n; i++) {
            if (a[i] == fav)cnt++;
        }
        if (cnt > 0 && pos) cout << "MAYBE";

        else if (pos) cout << "YES";
        else cout << "NO";
        ce;
    }



}