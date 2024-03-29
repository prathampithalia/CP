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





int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    // ai<=1000
    unordered_map<int, vector<int>> v;
    for (int i = 1;i <= 1000;i++) {
        for (int j = 1;j <= i;j++) {
            if (__gcd(i, j) == 1) {
                v[i].push_back(j);
            }
        }
    }

    test_cases(Y) {
        int n;cin >> n;
        vector<int> t(n);
        unordered_map<int, int> p;
        forr(i, n) {
            cin >> t[i];
            p[t[i]] = i + 1;
        }

        int ans = -1;

        for (int i = 0;i < n;i++) {
            for (auto j : v[t[i]]) {
                if (p.find(j) != p.end()) {
                    ans = max(ans, i + p[j] + 1);
                }
            }
        }

        cout << ans << endl;

    }



}