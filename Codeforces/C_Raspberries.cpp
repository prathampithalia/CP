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
        int n, k; cin >> n >> k;
        vector<int> v(n);

        int mini = INT_MAX;
        int ev = 0;
        vector<int> four(4);
        forr(i, n) {

            cin >> v[i];
            mini = min(mini, k - v[i] % k);
            if (v[i] % k == 0) mini = 0;

            //    if(k==4) four[v[i] % 4]++;
            if ((v[i] & 1) == 0) ev++;

        }

        if (k != 4) cout << mini;
        else {
            if (ev >= 2)mini = 0;
            else if (ev == 1) mini = min(mini, 1);
            mini = min(mini, 2);
            cout << mini;
        }
        ce;

    }
}