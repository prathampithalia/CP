// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
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

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);

    forr(i, n) cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        int a1 = 0, a2 = 0, a3 = 0;
        for (int j = 0; j < n; j++)
        {
            if ((v[i] | v[j]) == v[i])
                a1++;
            if ((v[i] & v[j]) == v[i])
                a2++;
            if ((v[i] & v[j]) != 0)
                a3++;
        }
        cout << a1 << " " << a2 << " " << a3 << endl;
    }
}