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


bool compf(pair<int, int> a, pair<int, int> b) {

    if( a.first == b.first )return a.second <b.second ;
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

//  Count the number of pairs of indices (i,j)
//  such that i<j and aj−ai=j−i
//  modifiy the equation : i.e  ->  (aj - j) == (ai - i)


test_cases(Y) {
    int n; cin >> n;
    vector<int> v(n);

    forr(i, n) {
        cin >> v[i];
        v[i] = v[i] - i;
    }

    unordered_map<int, int> t;
    forr(i, n) {
        t[v[i]]++;
    }

    int cnt = 0;

    each(i, t) {
        cnt += (i.second * (i.se - 1)) / 2;
    }

    cout << cnt << endl;

}



}