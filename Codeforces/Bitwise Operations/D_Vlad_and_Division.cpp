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
// #define int ll
#define MOD 1000000007 
#define mx 2147483647
#define test_cases(T) int T ; cin>>T ; while(T--)





int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        int n;cin >> n;
        map<int, int> mp;

        int ans = 0;
        bool prs = true;

        forr(i, n) {
            int  k; cin >> k;

            int x = (mx ^ k);
            //  check if x == v[j] present in map (0<=j<i) 
            //  if present : decrement it as it will form pair with v[i]

                //  else increment v[i] and ans++

            if (mp.find(x) != mp.end() && mp[x] > 0) {
                mp[x]--;
            }
            else {
                ans++;
                mp[k]++;
            }
        }


        cout << ans << endl;

    }


}