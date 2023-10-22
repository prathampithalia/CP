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


    int n; cin >> n;

    vector<pair<int, int>> v(n);
    forr(i, n) {
        for (int j = 0;j < 4; j++) {
            int elem;cin >> elem;
            v[i].fi += elem;
        }
        v[i].se = i + 1;
    }
    sort(all(v));
    reverse(all(v));

    int ind1 = 0;
    for (int i = 0; i < n;i++) {
        if (v[i].se == 1) {
            ind1 = i;
            break;
        }
    }
    int ans = ind1;
    for (int i = ind1; i >= 0; i--) {
        if (v[i].fi == v[i - 1].fi) ans--;
        else break;
    }
    cout << ans + 1;

}