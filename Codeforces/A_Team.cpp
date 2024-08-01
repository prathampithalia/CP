#include<iostream>
//#include<vector>

using namespace std;
#define int long long

void solve() {
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);


    int N; cin >> N;
    int cnt = 0;
    while (N--) {

        int a, b, c; cin >> a >> b >> c;
        if (a + b + c >= 2)cnt++;

    }

    cout << cnt;

}