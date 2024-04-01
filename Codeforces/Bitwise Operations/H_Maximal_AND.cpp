
// You are given an array a of length n and a non - negative integer k

// You can perform at most k operations on the array of the following type :

// --> Select an index i(1≤i≤n) and replace ai with aiOR2j where j is any integer between
//     0 and 30 inclusive.

// In other words, in an operation you can choose an index i
// (1≤i≤n) and set the j - th bit of ai to 1(0≤j≤30).

// Output the maximum possible value of(a1 & a2 & a3-- - &an)

// after performing at most k operations.


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
#define int ll
#define MOD 1000000007 
#define test_cases(T) int T ; cin>>T ; while(T--)





signed main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);


test_cases(Y) {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    forr(i, n)cin >> v[i];

    vector<int> t(31);

    forr(i, n) {
        for (int j = 30;j >= 0;j--) {
            // cout << (v[i] & (1 << j)) << ' ';
            if (v[i] & (1 << j)) t[j]++;
        }
    }
    int ans = 0;
    
    // we want highest bit one     
    for (int j = 30; j >= 0;j--) {
        int req = n - t[j];
        if (req <= k) {
            k -= req;
            ans += (1 << j);
        }
    }

    cout << ans << endl;
}


}