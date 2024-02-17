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

    test_cases(Y) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n), b(n), c(n);

        forr(i, n) {
            cin >> a[i].first;
            a[i].second = i;
        }
        forr(i, n) {
            cin >> b[i].first;
            b[i].second = i;
        }
        forr(i, n) {
            cin >> c[i].first;
            c[i].second = i;
        }


        sort(all(a));sort(all(b)); sort(all(c));

        reverse(all(a)); reverse(all(b));  reverse(all(c));

        int ans = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0;j < 3; j++) {
                for (int k = 0;k < 3; k++) {
                    if (a[i].se != b[j].se && b[j].se != c[k].se && c[k].se != a[i].se)
                        ans = max(ans, a[i].fi + b[j].fi + c[k].fi);
                }
            }
        }


        cout << ans << endl;



    }



}