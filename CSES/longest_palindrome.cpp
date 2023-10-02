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

    string s;
    cin >> s;
    int n = s.size();

    string ss=s;
    reverse(all(ss));

    vector<pair<int, string>> v{};
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >=0; j--)
        {
            // cout<<  s.substr(i , +j)<<endl;
            string temp = s.substr(i, +j), temp1 = s.substr(i, +j);
            reverse(all(temp1));
            if (temp == temp1)
                v.push_back({temp1.size(), temp1});
        }
    }
    if( ss==s) v.push_back({ss.size() , ss});

    sort(all(v));

    // each(i,v) cout<<i.first<<" "<<i.second<<endl;
    cout << v[v.size() - 1].second;
}