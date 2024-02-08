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

test_cases(Y){
    int n; cin>>n;
    vector<int> v(n);
    forr(i,n)cin>>v[i];


stack<int> s;

s.push(v[0]);
cout<<1;

int cur = v[0] , f  = v[0];
bool once = true ;

for(int i=1 ;i<n ;i++)
{
    if (once) {
        if (v[i] >= cur) {
            cout << 1;
            cur = v[i];
        }
        else if (v[i] <= f) {
            cout << 1;
            once = false;
            cur = v[i];
        }
        else cout << 0;
    }

    else {
        if (v[i] >= cur && f >= v[i]) {
            cout << 1;
            cur = v[i];
        }
        else {
            cout << 0;
        }
    }

}

    ce;
}



}