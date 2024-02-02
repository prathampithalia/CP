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



int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


test_cases(Y) {
    ll a, b, c, r;
    cin >> a >> b >> c >> r;
    if (a > b) {
        swap(a, b);
    }
    if (c >= a && c <= b) {
        if (c + r <= b && c - r >= a) {
            cout << b - a - 2 * r << "\n";
        }
        else if (c + r > b && c - r < a) {
            cout << 0 << "\n";
        }
        else if (c + r >= b) {
            cout << max(0ll, c - r - a) << "\n";
        }
        else if (c - r <= a) {
            cout << max(0ll, b - c - r) << "\n";
        }
    }
    if (c < a) {
        if (c + r < a) {
            cout << max(0ll, b - a) << "\n";
        }
        else {
            cout << max(b - (c + r), 0ll) << "\n";
        }
    }
    if (c > b) {
        if (c - r > b) {
            cout << max(0ll, b - a) << "\n";
        }
        else {
            cout << max(0ll, c - r - a) << "\n";
        }
    }

}


}