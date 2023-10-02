#include <bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define forab(i,a,b) for (int i = a; i < b; i++)

#define pvec(a,x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}
#define seev(v,n)  for(int i=0;i<n;i++){ll int ___; cin>>___; v.push_back(___);}


#define each(a, x) for (auto &a : x)
#define vi vector<int>
#define pb push_back
#define ll long long
#define lb lower_bound
#define ub upper_bound
#define sumall(a) accumulate(a.begin(),a.end(),0)
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)





int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

int n, k;
cin>>n>>k;

vi v{}; seev(v,n)
vector<pair<int,int>> b{};

for(int i=0 ;i<n ;i++){
    b.pb({v[i],i});
}

sort(all(b));


// for(int i=0 ;i<n  ;i++){
//         cout<<b[i].first<<" "<<b[i].second<<endl;
//     }


vi a{};
int sm,start,end=n-1;

bool ans=false;
for(int i=0 ;i<n ;i++){
    sm=k-b[i].first;
    start=i+1;
    while(start<end){
        if(b[start].first+b[end].first== sm ){
            ans=true; 
            a.pb(b[i].second+1);
            a.pb(b[start].second+1);
            a.pb(b[end].second+1);
            break;

            }
        if(b[start].first+b[end].first > sm){end--;}
        else start++;
    }
    if(ans) break;  
}

if(ans){
    sort(all(a));
    pvec(aa,a)
}
else{
    cout<<"IMPOSSIBLE"; 
}

}