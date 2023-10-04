// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl
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

    vector<string> v{"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

    int t = v.size();
    int n;
    cin >> n;

    string s;
    cin >> s;
    string ans = "";

    for (int i = 0; i < t; i++)
    {
        bool ok = false, ok1 = true;
        ;
        for (int j = 0; j < n; j++)
        {
            // cout<<s[j];
            if (s[j] != '.' && s[j] == v[i][j] && n == v[i].size())
            {
                ok = true;
            }
            if (s[j] != '.' && s[j] != v[i][j] && n == v[i].size())
            {
                ok1 = false;
            }
        }
        if (ok && ok1)
            ans = v[i];
    }
    if (ans.size() > 1)
        cout << ans;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (n == v[i].size())
            {
                ans = v[i];
                break;
            }
        }
        cout << ans;
    }
}