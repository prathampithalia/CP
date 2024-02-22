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





int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        int n;cin >> n;
        string s; cin >> s;


        //  making string small

        string k = "";
        k.pb(s[0]);
        for (int i = 1;i < n; i++) {
            if (s[i] != k.back())k.pb(s[i]);
        }

        vector<string> p{ "WBW" , "WRW" };

        // cout<< k<< "  :  " ;
        if (k.size() == 1 && k[0] != 'W') pno;
        else if (k.size() == 2 && count(all(k), 'W') == 1) pno;
        else if (k.find(p[0]) != k.npos || k.find(p[1]) != k.npos) {
            pno;
        }

        else {

            if (k[0] != 'W' && k[1] == 'W') pno;
            else if (k[k.size() - 1] != 'W' && k[k.size() - 2] == 'W') pno;
            else pyes;

        }

    }


}

//  not possible
// wbw wrw 