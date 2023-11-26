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







int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    int  n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    bool pref = true, suff = true;

    // prefix
    for (int i = 0; i < n;i++) {
        if (s[i] != t[i]) { pref = false; break; }
    }


    //  suffix
    for (int i = 0; i < n;i++) {
        if (s[n - i - 1] != t[m - i - 1]) { suff = false; break; }
    }

    // cout<< pref <<" "<<suff<<endl;
    if (pref && suff) cout << 0;
    else if (pref == true && suff == false) cout << 1;
    else if (pref == false && suff == true) cout << 2;
    else cout << 3;


}