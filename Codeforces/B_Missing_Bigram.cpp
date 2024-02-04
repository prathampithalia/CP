
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
    vector<string> v(n - 2);
    forr(i, v.size()) {
        cin >> v[i];
    }

    string s = v[0];

    for (int i = 1;i < v.size();i++) {
        if (s.back() != v[i][0]) {
            s.push_back(v[i][0]);
            s.push_back(v[i][1]);
        }
        else {
            // if( i== v.size()-1 && s.back() != v[i][1]){
            // s.push_back(v[i][1]);
            // s.push_back(v[i][1]);
            // }
            // else 
            s.push_back(v[i][1]);

        }
    }

    if (s.size() != n) {
        s.push_back(s.back());
    }
    cout << s << endl;

}

}