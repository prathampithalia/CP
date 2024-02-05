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


bool palcheck(string s) {
    int sz = s.size();
    for (int i = 0;i < (sz) / 2;i++) {
        if (s[i] != s[sz - i - 1]) return false;
    }
    return true;
}



int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


    test_cases(U) {
        int a, b; cin >> a >> b;
        string s; cin >> s;
        int n = a + b;

        for (int i = 0; i < (n + 1) / 2; i++) {
            if (s[i] == '?') s[i] = s[n - i - 1];
            else if (s[n - i - 1] == '?') s[n - i - 1] = s[i];
        }

        int zero = a, one = b;

        bool poss = false;

        forr(i, n) {
            if (s[i] == '0') zero--;
            if (s[i] == '1') one--;
        }

        if (zero == 0 && one == 0) {
            if (palcheck(s)) cout << s << endl;
            else cout << -1 << endl;
        }
        else if (zero == a && one == b) {
            if (n & 1) {
                if (zero % 2 || one % 2) {
                    poss = true;
                }
                else cout << -1 << endl;
            }
            else {

                if (a % 2 == 0 && b % 2 == 0) {
                    poss = true;
                }
                else cout << -1 << endl;

            }

        }

        else {
            for (int i = 0;i < (n + 1) / 2;i++) {
                if (s[i] == '?') {
                    if (zero > one) {
                        s[i] = '0';
                        s[n - 1 - i] = '0';
                        zero = zero - 2;
                    }
                    else {
                        s[i] = '1';
                        s[n - 1 - i] = '1';
                        one = one - 2;
                    }
                }

            }

            int fa = 0, fb = 0;
            for (int i = 0;i < n;i++) {
                if (s[i] == '1')fa++;
                else fb++;
            }
            if (fa == b && fb == a && palcheck(s))
                cout << s << endl;
            else cout << -1 << endl;

        }

        if (poss) {
            for (int i = 0; i < n; i++) {
                if (s[i] == '?') {
                    if (zero > one) {
                        s[i] = '0';
                        s[n - 1 - i] = '0';
                        zero = zero - 2;
                    }
                    else {
                        s[i] = '1';
                        s[n - 1 - i] = '1';
                        one = one - 2;
                    }
                }


            }

            if (palcheck(s)) cout << s << endl;
            else cout << -1 << endl;

        }

    }


}