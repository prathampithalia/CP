
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


test_cases(Y) 
{
    int n, q;
    cin >> n >> q;

    vector<ll int> v(n);

    forr(i, n) {cin >> v[i];}

    sort(v.rbegin() , v.rend());

    ll int p[n] {0};
    p[0] = v[0];
    for(int i= 1 ;i <n ; i++){
        p[i] = p[i-1] + v[i] ;
    }

    while( q-- ){

        ll int x ; cin>>x;

        int ans= -1;
        bool ok = true ;
        if( p[n-1] >= x){

            int s= 1  ,e =  n ;
            int mid = s + (e-s)/2;
            while (s <= e ) {

                if( p[mid -1] >= x){ ans = mid ; e = mid -1;    }
                else s= mid+1;
                mid = s + (e-s)/2;
            }
        }
        else ans= -1;

        cout<< ans<<endl;
    }


}


}