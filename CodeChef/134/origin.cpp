
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
#define N 1e18
#define test_cases(T) int T ; cin>>T ; while(T--)

#define int ll

int digSum(int n)
{
    if (n == 0) 
       return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}

signed main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);


test_cases(Y){
    int n ; cin>>n;

    if( n <= 9){
        cout << (n*(n+1))/2 << endl;
    }
    else {
    int k = n/9;
    int ans = 45 *k ;
    int rem = n%9;

    cout<< ans + (rem*(rem+1))/2 << endl;
    }
}

}