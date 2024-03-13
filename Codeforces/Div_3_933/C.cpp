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
        int n; cin >> n;
        string s; cin >> s;


        // vector<int> t(n);
        int cnt = 0;
        for (int i = 0; i < n - 2; i++) {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
                // t[i] = 1 ;
                // t[i+1] = 1 ;
                // t[i+2] = 1 ;
                s[i + 2] = '#';
                cnt++;
            }

            else if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
                // t[i] = -1 ;
                // t[i+1] = -1 ;
                // t[i+2] = -1 ;
                s[i + 2] = '#';
                cnt++;
            }
        }

        cout << cnt << endl;

    }


}