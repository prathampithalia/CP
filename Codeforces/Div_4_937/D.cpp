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


bool isbin(string s) {
    forr(i, s.size()) {
        if (s[i] != '1' && s[i] != '0') return false;
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

    // n<= 100000

    test_cases(Y) {

        int n; cin >> n;
        string s = to_string(n);

        if (isbin(s)) pyes;

        else {
            vector<int> d{ 10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111 };


            int t = n;
            int j = d.size() - 1;
            while (t > 0 && j >= 0) {
                while (t % d[j] == 0 && j >= 0) {
                    t = t / d[j];
                }
                j--;

            }

            if (t > 1) pno;
            else pyes;

        }


    }



}