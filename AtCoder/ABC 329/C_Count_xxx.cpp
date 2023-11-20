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

int n;  cin>>n;
string s; cin>>s;

set<char> ss(all(s));

int nn=26 ;
vector<int> f(nn);

// int ans=0;

for (char i : s) {
    int c=0;
    int cnt=INT_MIN;
    for (int j = 0;j < n; j++) {
        if(s[j] == i){c++ ; cnt= max(cnt,c) ;}
        else{c=0;}
    }
    f[i-'a'] = cnt;
}

cout<< accumulate(all(f),0);

}