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
    int n; cin >> n;

    vector<int> v(n);
    vector<int> zero{};
    forr(i, n)
    {
        cin >> v[i];
        if (v[i] == 0) {
            zero.pb(i);
        }
    }

    //  choose i , j
    //  add a[i] to a[j]
    // remove a[i]

    int l = 0, r = zero.size() - 1;
    int c = 0;

    if (is_sorted(all(v))) cout << 0 << endl;
    else {

        // pvec(zero)
        // ce;
        while (is_sorted(all(v)) != 1) {
            if (v[l] == 1) {
                v[zero[r]] = 1;
                v[l] = 0;
                r--;
                l++;
                c++;
            }
            else l++;
        }

        cout << c << endl;
    }


}




}