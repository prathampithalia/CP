
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
        int k; cin >> k;

        int n = 3;

        vector<vector<string>> v(n, vector<string>(k, "00"));

        forr(i, n) {
            forr(j, k)cin >> v[i][j];
        }

        vector<vector<int>> c(n, vector<int>(k, 0));
        vector<vector<int>> cc(n, vector<int>(k, 0));

        vector<int> t(n);

        forr(i, n) {
            forr(j, k) {

                string s = v[i][j];
                bool pres = true, twice = true;
                int tw = 0;

                int cnt = 0;
                for (int ii = i + 1;ii < n;ii++) {
                    for (int jj = 0;jj < k;jj++) {

                        if (s == v[ii][jj] && c[ii][jj] == 0) {
                            c[i][j] = 1;
                            c[ii][jj] = 1;
                            cnt++;
                            pres = false;

                            t[i]++;
                            t[ii]++;
                        }


                    }

                }
                if (pres && c[i][j] == 0) t[i] += 3;
                if (cnt == 2) {
                    t[i] -= 2;
                    if (i == 1) {
                        t[0]--;
                        t[2]--;
                    }
                    else if (i == 2) {
                        t[1]--;
                        t[0]--;
                    }
                    else {
                        t[1]--;
                        t[2]--;
                    }
                }

                // pvec2d(c)
                // cout<< "-- ";
                // pvec(t)
                // ce;
            }


        }

        pvec(t)
            ce;
    }

}