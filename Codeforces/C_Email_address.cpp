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

    string s; cin >> s;

    string t = s;


    int n = s.size();

    ll int att = s.find("at");
    while (true && att < 1000) {

        s.replace(att, 2, "@");
        att = s.find("at");
        n = s.size();
        if (att >= n) break;
    }

    n = s.size();
    ll int dtt = s.find("dot");

    while (true && dtt < 1000) {

        s.replace(dtt, 3, ".");
        dtt = s.find("dot");
        n = s.size();
        if (dtt >= n) break;
    }

    string ans = "";

    if (s.find('.') == 0) {
        s.replace(0, 1, "dot");
    }
    if (s.rfind('.') == (s.size() - 1)) {
        s.replace(s.size() - 1, 1, "dot");
    }

    if (s.find('@') == 0) {
        s.replace(0, 1, "at");
    }

    if (s.rfind('@') == (s.size() - 1)) {
        s.replace(s.size() - 1, 2, "at");
    }

    cout << s;

}