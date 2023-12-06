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

    if( a.first == b.first )return a.second <b.second ;
    else return a.first > b.first;

}

bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}


int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        string s; cin >> s;
        int n = s.size();


        // A : 65   Z : 90
        // a: 97  z: 122

        vector<pair<char, int>> low{}, up{};
        for (int i = 0; i < n; i++) {
            if (int(s[i]) <= 91 && s[i] != 'B') { up.push_back({ s[i],i }); }
            if (int(s[i]) >= 95 && s[i] != 'b') { low.push_back({ s[i],i }); }

            if (s[i] == 'B') {
                if (up.size() != 0) up.pop_back();
            }
            if (s[i] == 'b') {
                if (low.size() != 0) low.pop_back();
            }

        }
        if (low.size() > up.size()) {
            forr(i, up.size()) {
                low.pb({ up[i].first , up[i].second });
            }
            sort(all(low), myComparison);
            each(i, low) { cout << i.first; }
        }
        else {
            forr(i, low.size()) {
                up.pb({ low[i].first , low[i].second });
            }
            sort(all(up), myComparison);
            each(i, up) cout << i.first;
        }
        ce;

    }




}