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
        int n, k; cin >> n >> k;

        string s; cin >> s;

        int fs = INT_MAX, lt = INT_MIN;

        vector<int> v(n);

        for (int i = 0;i < n;i++) {
            if (s[i] == '*') {
                v[i] = -1;
                fs = min(fs, i);
                lt = max(lt, i);
            }
        }


        // ti = 0  : '.'
        // ti = 1  : 'x'
        // ti = -1  : '*'

        int cnt = 0;
        s[fs] = 'x';
        s[lt] = 'x';
        v[fs] = 1;
        v[lt] = 1;
        if (fs == lt) {
            cnt++;

        }
        else {
            cnt += 2;
        }
        int ln = 0, flag = false;;

        for (int i = 0;i < n;i++) {
            bool present = true;
            if (v[i] == 1 && (i + k) < n) {
                for (int j = i + k;j >= i; j--) {
                    if (v[j] == 1) {
                        present = false;
                        break;
                    }
                    else if (v[j] == -1 && j < n && present) {
                        v[j] = 1;
                        cnt++;
                        i = j - 1;
                        break;
                    }
                }
            }
        }
        cout << cnt << endl;

        // pvec(v)
        // ce;


    }



}