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

    int n, k; cin >> n >> k;

    int a[n], b[n];
    forr(i, n) {
        cin >> a[i];
    }
    int t = 0;
    forr(i, n) {
        cin >> b[i];
        if (b[i])t += a[i];
    }

    int sum = 0;

    forr(i,k){
        if( !b[i]) sum += a[i];
    }  

    int ans = sum;

    for (int i = k; i < n;i++) {
        if (!b[i]) {
            sum += a[i];
        }
            if (!b[i - k]) sum -= a[i - k];

        ans = max(ans, sum);
    }


    cout << t + ans ;

}