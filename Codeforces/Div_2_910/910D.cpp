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


test_cases(Y){
    int n; cin>>n;
    vector<int> a(n), b(n);

    int min_a = INT_MAX , ai=0;
    int max_a = INT_MIN , aii=0;

    int min_b = INT_MAX , bi=0;
    int max_b = INT_MIN , bii=0;

    forr(i,n){cin>>a[i];

    min_a= min(min_a , a[i]);
    if (min_a == a[i]) ai=i;
    
    max_a = max(max_a , a[i]);
    if (max_a == a[i]) aii= i;

    }
    forr(i,n){cin>>b[i];

    min_b= min(min_b , b[i]);
    if (min_b == b[i]) bi=i;
    
    max_b = max(max_b , b[i]);
    if (max_b == b[i]) bii= i;

    }

    swap(b[bi] , b[bii]);
    
    vector<pair<int,int>> v{};

    forr(i,n){
        if( a[i]== b[i]){v.push_back({a[i] , i}) ;}
    }

sort(all(v));

if(v.size() == 0){
    swap(b[ai] , a[aii]);
}
else swap(b[bi] , b[v[0].second]);
    int ans=0;
    forr(i,n){
        ans += abs(a[i]-b[i]);
    }
    cout << ans << endl;
}



}