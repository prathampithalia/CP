#include <iostream>
// #include <vector>
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
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} 
#define int ll 


signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n ; cin>>n;
    int v[n] ;
    int g=1 ;
    cin>>g ;
    v[0] = g ;
    for(int i =1 ; i<n ;i++){
        cin>>v[i] ;
        g = gcd(g,v[i]);
    }

    int ans = 0 ;

    for (int i = 1; i*i <= g ; i++) {
        if (g % i == 0) {
            ++ans;
            if (i != g / i) {
                ++ans;
            }
    }
}
    cout << ans ; 
}