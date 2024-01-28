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
#define MOD 1000000007 
#define test_cases(T) int T ; cin>>T ; while(T--)


bool compf(pair<int, int> a, pair<int, int> b) {

    if( a.first == b.first )return a.second <b.second ;
    else return a.first > b.first;

}



int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<pair<int, string>> alp(26);

    for (char i = 'a'; i <= 'z'; i++) {
        alp[i - 'a'].second = i;
        alp[i - 'a'].first = i - 'a' + 1;
    }

    test_cases(Y) {
        int n; cin >> n;

        string s; cin >> s;

        vector<string> v{};

        string t = s;

        reverse(all(t));

        string tt = "";
        int p = 0;
        for (int i = 0; i < n; i++) {
            if (t[i] == '0') {

                tt.push_back(t[i + 2]);
                tt.push_back(t[i + 1]);
                p = stoi(tt);
                v.pb(alp[p - 1].second);
                i += 2;
                p = 0;
            }
            else {
                tt = '0' + t[i];
                v.pb(tt);
                // v.pb(t[i]);
            }
            tt = "";
        }

        reverse(all(v));

        forr(i, v.size()) cout << v[i];
        ce;

    }


}