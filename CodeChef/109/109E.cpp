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

int ev= 0  , od=0 ;

forr(i, n){
    cin >> v[i];
    if( v[i]&1 )od++;
}
ev= n - od;

sort(all(v));

if (ev%2 == 0 && od %2 == 0) {

    vector< ll int> t{};
    // vector<int> t1{}, t2{};
    for (int i = 0; i < n / 2;i++) {
        int a1 = v[i + n / 2] - v[i];
        int a2 = v[i + n / 2] + v[i];
        // t1.push_back(a1 / 2);
        // t1.push_back(a2 / 2);

        if ((a1 / 2 % 2 == 1 && a2 / 2 % 2 == 0) ||
            (a1 / 2 % 2 == 0 && a2 / 2 % 2 == 1)) {
            // t2.push_back(a1 / 2 + 1);
            // t2.push_back(a2 / 2 + 1);

            // t[i] = a1/2 + 1 ;
            t.pb( a1/2 + 1);
            t.pb( a2/2 + 1);
            // t[i+n/2] = a2 / 2 +1 ;
        }
        else {
            // cout<< a1 / 2<< ' '<<a2/2 <<" ";
            // t2.push_back(a1 / 2);
            // t2.push_back(a2 / 2);

            t.pb( a1/2 );
            t.pb( a2/2 );

            // t[i]= a1/2;
            // t[i+1]= a2/2 ; 
        }

    }
    // sort(all(t1));
    // sort(all(t2));
    // reverse(all(t1));
    // reverse(all(t2));

    // int s1 = accumulate(all(t1), 0);
    // int s2 = accumulate(all(t2), 0);

    // if (s1 > s2) pvec(t1)
    // else pvec(t2);

    sort(t.rbegin() , t.rend());
    pvec(t)

    ce;


}
else {pvec(v) ; ce;}

}




}