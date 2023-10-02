// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
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

    int n, x;
    cin >> n >> x;

    vector<ll int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));

    int s = 0, e = n - 1;

    int ans = 0;

    while (s <= e)
    {
        if (v[e] == x)
        {
            ans++;
            e--;
        }
        else if (v[s] + v[e] <= x && v[e] < x)
        {
            s++;
            e--;
            ans++;
        }
        else if (v[s] + v[e] > x && v[e] < x)
        {
            e--;
            ans++;
        }
        // cout<<s<<" "<<e<<endl;
    }

    cout << ans;
}