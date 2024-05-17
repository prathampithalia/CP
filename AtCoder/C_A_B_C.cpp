#include<bits/stdc++.h>

using namespace std;

#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
#define ce cout << endl
#define forr(i, n) for (int i = 0; i < n; i++)
#define pvec(x) for (auto & a: x) { cout << a << " ";}
#define pvec2d(v) for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}

#define each(a, x) for (auto & a: x)
#define ppair(x) each(i, x) cout << i.first << " " << i.second << endl;

#define ll long long
#define MOD 1000000007
#define test_cases(T) int T; cin >> T; while (T--)
#define int ll 


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

int n ; cin>>n;
vector<int> a(n);
forr(i,n)cin>>a[i];

int m ; cin>>m;
vector<int> b(m);
forr(i,m)cin>>b[i];

int l ; cin>>l;
vector<int> c(l);
forr(i,l)cin>>c[i];


unordered_map<int,int> sum_bc;
forr(i,m){
    forr(j,l){
        sum_bc[b[i]+c[j]] ++;
    }
}

int q ; cin>>q;
vector<int> qt(n);
forr(i,q){
    int qx ; cin>>qx;
    bool found = false ;
    for(int j = 0 ; j<n ; j++){
        // if (qx >= a[i]) {
            if (sum_bc.find(qx-a[j]) != sum_bc.end()){
                found = true; break;
            }
        // }
    }
    if( found )cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}



}