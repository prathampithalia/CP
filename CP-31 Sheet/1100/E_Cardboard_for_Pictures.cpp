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


#define int ll 


signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        int n, c; cin >> n >> c;
        vector<int> v(n);

        forr(i, n)cin >> v[i];

        int l = 0, r = 1e9;

        int mid = l + (r - l) / 2;

        while (l <= r) {
            int total = 0;

            mid = l + (r - l) / 2;

            forr(i, n) {
                total += (v[i] + (2 * mid)) * (v[i] + (2 * mid));

                if (total > c) break;
            }

            if (total == c) {
                cout << mid << endl;
                break;
            }
            if (total > c) {
                r = mid - 1;
            }
            else l = mid + 1;


        }

    }


}