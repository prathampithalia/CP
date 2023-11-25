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
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)







int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        int n, k; cin >> n >> k;
        vector<char> s(n);
        int a = 0, b = 0;
        forr(i, n) {
            cin >> s[i];
            if (s[i] == 'A')a++;
            else b++;
        }

        if (b == k)cout << 0 << endl;
        else {
            int na = 0, nb = 0;
            int cnt = 1;
            if (b < k) {
                for (int i = 0; i < n;i++) {
                    if (s[i] == 'A') {
                        // na++;
                        b++;
                        if ((b) == k) {

                            cout << cnt << endl;
                            cout << i + 1 << ' ' << "B" << endl;
                            break;
                        }

                    }
                }
            }
            else if (b > k) {
                for (int i = 0;i < n;i++) {
                    if (s[i] == 'B') {
                        b--;
                        if (b == k) {
                            cout << 1 << endl;
                            cout << i + 1 << ' ' << 'A' << endl;
                            break;
                        }
                    }
                }
            }
        }

    }



}