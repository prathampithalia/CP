#include<bits/stdc++.h>

using namespace std;

#define test_cases(T) int T; cin >> T; while (T--)


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

test_cases(Y){
    int x1 , y1 , x2 , y2 ;
    cin>>x1>>y1>>x2>>y2;

    if( y2 < y1)cout << -1 << endl;
    else{
        int reach_Y2 = y2 - y1;
        x1 += reach_Y2;

        if(x1 < x2)cout << -1 << endl;
        else if( x1 == x2) cout << reach_Y2 << endl;
        else{
            cout << reach_Y2 + abs(x1 - x2) << endl;
        }
    }
}
}