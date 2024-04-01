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



#define int ll 

signed main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<vector<string>> p(11, vector<string>(11, "00"));
    for (char i = 'a'; i <= 'k'; i++) {
        for (char j = 'a'; j <= 'k'; j++) {
            string t = "";
            t += i;
            t += j;
            p[(int)i - 'a'][(int)j - 'a'] = t;
        }
    }


    test_cases(Y) {
        int n; cin >> n;
        unordered_map<string, int> v;

        vector<string> s(n);

        forr(i, n) {
            cin >> s[i];
            v[s[i]]++;
        }


        int ans = 0;
        forr(i, n) {

            for (int j = 0;j < 11; j++) {
                string a1 = p[j][s[i][1] - 'a'];
                if (v.find(a1) != v.end() && a1 != s[i]) {
                    // ans += (v[a1] * v[s[i]]);
                    ans += (v[a1]);
                }
            }
            for (int j = 0;j < 11; j++) {
                string a2 = p[s[i][0] - 'a'][j];
                if (v.find(a2) != v.end() && a2 != s[i]) {
                    ans += (v[a2]);
                }
            }

        }

        cout << ans / 2 << endl;

    }


}