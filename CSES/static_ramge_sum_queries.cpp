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

// COMPARISON FUNCTIONS
bool compf(pair<int, int> a, pair<int, int> b) {
    if( a.first == b.first )return a.second <b.second ;
    else return a.first > b.first; }

bool lexcomp(pair<int,string> p1,pair<int,string> p2){
    if(p1.first==p2.first){ return p1.second<p2.second;}
    return p1.first>p2.first; }


#define int ll


signed main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

int n , q; cin>>n>>q;

vector<int> v(n) , p(n);
forr(i,n){

    cin>>v[i];
    if( i == 0) p[i] = v[i];
    else {
        p[i] = v[i] + p[i-1] ;
    }
}

while(q--){
    int a, b; cin>>a>>b;

    if( a != 1)
    cout<< p[b-1] - p[a-2] << endl;
    else cout<< p[b-1]  << endl;


}
// pvec(p)



}