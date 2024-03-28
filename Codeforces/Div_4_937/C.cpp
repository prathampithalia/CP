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
        int n = 5;
        vector<char> v(n);

        forr(i, n)cin >> v[i];

        int h1 = (int)v[0] - '0';
        int h2 = (int)v[1] - '0';

        int hrs = h1 * 10 + h2;
        int p = hrs;


        hrs %= 12;

        if (hrs == 0) {
            cout << 12;
        }
        else {
            if (hrs > 9)cout << hrs;
            else cout << '0' << hrs;
        }


        for (int i = 2;i < n;i++)cout << v[i];
        string ampm = "PM";

        if (p < 12 || (p == 24 && v[3] == '0' && v[4] == '0')) {
            ampm = "AM";
        }

        cout << ' ' << ampm;

        ce;
    }


}