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

        int k, n; cin >> k >> n;
        //  Construct an increasing array of k integers from 1 to n
        //  with maximum possible characteristic.

        vector<int> v(k);

        iota(all(v), 1);
        int ind = INT_MAX;
        for (int i = 1;i < k; i++) {

            v[i] += v[i - 1];
        // this edge case is important
            if (v[i] + k - i - 1 > n) ind = min(ind, i);
        }

        // cout<< ind <<endl;
        if( ind != INT_MAX){
        for (int i = ind;i < k;i++) {
            v[i] = v[ind - 1] + 1;
            ind = i+1;
        }
        }
        pvec(v)
            ce;


    }


}