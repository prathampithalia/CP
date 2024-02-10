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


    test_cases(Y) {
        int n; cin >> n;
        vector<vector<int>> v(n, vector<int>(n - 1, 0));

        forr(i, n) {
            forr(j, n - 1) {
                cin >> v[i][j];
            }

        }


        vector<int> t(n);

        // unordered_map<int,int> ans;

        vector<int> ans(n);

        forr(i, n - 1) {
            forr(j, n) {

                t[v[j][i] - 1]++;

            }

            // pvec(t)

            forr(i, n) {

                ans[i] += t[i];

            }

            // ce;
        }

        vector<pair<int, int>> fans(n);

        for (int i = 0;i < n; i++) {
            fans[i].first = ans[i];
            fans[i].second = i + 1;
        }

        sort(all(fans));

        for (int i = 0; i < n;i++) {
            cout << fans[n - i - 1].second << ' ';
        }
        ce;

    }


}