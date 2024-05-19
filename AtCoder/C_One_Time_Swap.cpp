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


    string s; cin >> s;

    int n = s.size();
    vector<int> v(26);
    for (auto i : s)v[i - 'a']++;

    int nn = 0;
    forr(i, 26) {
        nn += (bool)v[i];
    }

    int ans = 1;
    if (nn == n) ans = 0;

    for (int i = 0; i < n; i++) {
        if (v[s[i] - 'a'] > 0) {
            if (v[s[i] - 'a'] == 1) {
                ans += n - i - 1;
            }
            else {
                ans += n - i - 1 - v[s[i] - 'a'] + 1;
            }
            v[s[i] - 'a']--;
        }

        // debug(v , ans) ; ce;
    }

    if (ans == 0) ans = 1;

    cout << ans;

}