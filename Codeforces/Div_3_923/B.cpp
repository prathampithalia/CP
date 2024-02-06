
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
        vector<int> v(n), ps;
        forr(i, n) {
            cin >> v[i];
            if (v[i] == 0) ps.pb(i);
        }

        vector<char> s(n, '-');

        int j = 0;
        forr(i, n) {
            if (v[i] == 0) {
                s[i] = v[i] + 'a' + j;
                j++;
            }
        }

        int i = 0, ind = 0;

        while (i < n) {
            if (v[i] == 1) {
                int cur = v[i];
                s[i] = ps[ind] + 'a';

                char elem = ps[ind] + 'a';
                int kk = 2;
                for (int j = i; j < n;j++) {
                    if (v[j] == kk) {
                        s[j] = elem;
                        kk++;
                    }
                }

                ind++;
            }
            i++;
        }

        forr(i, n)cout << s[i];
        ce;

    }


}