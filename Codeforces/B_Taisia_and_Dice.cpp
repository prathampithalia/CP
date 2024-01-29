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


test_cases(Y) {
    int n, s, r; cin >> n >> s >> r;

    n--;
    int ma = s - r;
    vector<int> v{};
    v.pb(s - r);
    int d = r / n;

    if (r % n == 0) {
        forr(i, n)v.pb(d);
    }
    else {
        forr(i, n - 1) v.pb(d);
        int p = (n - 1) * d;
        v.pb(r - p);
    }

    sort(all(v));
    // pvec(v)
    if (v[n] > ma) {
        int z = v[n] - ma;
        v[n] = v[n] - z;
        for (int i = 0; i <= n - 1;i++) {
            if (z >= 0)v[i]++;
            z--;
            if (z == 0) break;
        }
    }

    pvec(v)


    ce;

}


}