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



int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


    test_cases(Y) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> f(26);

        for (int i = 0;i < n;i++) {
            f[s[i] - 'a']++;
        }

        string t = "";
        forr(i, 26) {
            if (f[i] != 0) { t.pb(char(97 + i)); }

        }

        if (t == s) pyes;
        else {
            vector<pair<char, vector<int>>> v(t.size());
            forr(i, t.size()) {
                v[i].first = t[i];
            }
            for (int i = 0;i < v.size();i++) {
                for (int j = 0; j < n;j++) {
                    if (v[i].first == s[j]) {
                        v[i].second.push_back(j);
                    }
                }
            }
            // print pair
            // each(i,v) {

            // 	cout<<i.first<<" ";
            // 	for( int k : i.second){ cout<< k<<' ';}
            // 	ce;
            // }

            bool ok = true, flag = true;

            for (int i = 0; i < v.size(); i++) {
                if (v[i].second.size() > 1) {
                    for (int k = 0; k < v[i].second.size() - 1; k++) {
                        if (v[i].second[k] % 2 != v[i].second[k + 1] % 2) ok = false;
                    }
                }
            }

            if (ok) pyes;
            else pno;

        }

    }

}