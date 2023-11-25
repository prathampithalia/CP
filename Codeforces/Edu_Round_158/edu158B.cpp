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


test_cases(Y){
    int n; cin>>n;
    vector<int> v(n);
    forr(i,n) cin>>v[i];

    vector<int> t(n , 1);
    int c = 0 ;

    if( n== -1){
        cout<< v[0] - 1;
    }
    else {
        for (int i = 0;i < n;i++) {
            if (v[i] != t[i])c++;
        }
        // continuous

        int k = 0;
        int prev = v[0];
        int dis = 0;
        for (int i = 1; i < n;i++) {
            if (v[i] == prev && prev!=1) {
                if (k == 0)dis++;
                k++;
            }
            if (v[i] != prev) {
                prev = v[i];
                k = 0;
            }
            // cout<<prev<<endl;
        }
        // cout << c << " " << dis;
        cout<< c - dis ;
    }

    ce;
}


}