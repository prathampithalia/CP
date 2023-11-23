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
        int n; cin >> n;
        vector<int> v(n);

        int a1 = 0, a2 = 0;
        //  a1 , -1 count   ,, a2 , 1 count

        int tot = 0, prod = 1;

        forr(i, n) {
            cin >> v[i];
            tot += v[i];
            prod *= v[i];
            if (v[i] == 1)a2++;
        }

        a1 = n - a2;
        int c = 0;

        // if( tot  == 0 ) cout<< 0 <<endl;
        // else if ( tot >=0 && prod == 1) cout<< 0<<endl;
        // else{
        while (a1 > n / 2 || a1 % 2 == 1) {
            a1--;
            c++;
        }
        cout << c << endl;
        // }

    }


}