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


bool check(vector<int> &arr, int r) {
    int k = arr[r];
    for (int i = r - 1; i >= 0; i--) {

        if (k >= arr[i])
            k -= arr[i];
    }

    if (k != 0)
        return false;
    else
        return true;
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

        vector<int> v(n);
        forr(i, n)cin >> v[i];

        sort(all(v));

        // pvec(v)

        vector<int> a(n);

        for (int i = 0;i < n;i++) {

            a[i] = check(v, i);

        }
        a[0] = 1;

        if (n == 1) {
            if (v[0] != 1) pno;
            else pyes;
        }
        else {
            sort(all(a));
            if (a[0] == 1 && v[0] == 1) pyes;
            else pno;
        }

    }


}