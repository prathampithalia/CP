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
#define each(a, x) for (auto & a: x)
#define pvec(x) for (auto & a: x) { cout << a << " ";}
#define pvec2d(v) for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}
#define ppair(x) each(i, x) cout << i.first << " " << i.second << endl;

#define ll long long
#define MOD 1000000007
#define test_cases(T) int T; cin >> T; while (T--)
#define vec(v,n,int) vector<int> v(n) ; forr(i,n)cin>>v[i];
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (m,0)); forr(i, n)forr(j, m) cin >> v[i][j];


#define int ll


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

test_cases(Y){
    int n ; cin>>n;
    vector<int> v(n);
    int one = 0 ,zero = 0 , iPairs = 0 ;
    forr(i,n){
        cin>>v[i];
        if( v[i] )one++;
        else{
            zero++;
        }
    }
    int cnt = 0 ,lastZero = 0, p1 = 0;
    for(int i =n-1 ; i>=0 ;i--){
        if( v[i] == 0){
            cnt++;
            lastZero = i;
        }
        else{
            iPairs += cnt ;
            p1 += cnt;
        }
    }
    int ans1 = max(p1 + zero - 1 - lastZero , iPairs) ;



    // flipping last 1
    bool first = true ;
    int z = 0, p2 = 0;

    for(int i = n-1 ;i>=0 ; i--){
        if(v[i] == 1){
            if(first){
                z++;
                first = false;
            }
            else{
                p2 += z ;
            }
        }
        else z++;
    }
    ans1 = max(ans1 , p2);
    cout << ans1 << endl;

}


}