#include<iostream>

using namespace std;

#define forr(i, n) for (int i = 0; i < n; i++)

#define int long long 


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;

    int a[n];

    forr(i,n)cin>>a[i];

    int roomNo = 0 , vis = 0 , j = 0 ;

    forr(i,m){
        int s; cin >> s;

        while( s > vis + a[j] ){
            vis += a[j++];
        }

        cout << j+1 <<' '<<  s - vis << endl;


    }



}