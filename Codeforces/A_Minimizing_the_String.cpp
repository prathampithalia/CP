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

    int n; cin >> n;
    string s;cin >> s;

    string S = s;

    for (int i = 0; i < n; i++) {
        if (s[i] > s[i + 1])
        {

            s.erase(i, 1);
            break;
        }
    }

    cout << s;

}