#include<bits/stdc++.h>

using namespace std;

int ind = 0;
void print(string n) {
    if (ind == n.size()) {
        ind = 0;
        return;
    }
    cout << n[ind] << " ";
    ind++;
    print(n);
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;cin >> t;
    while (t--) {
        string n; cin >> n;
        print(n);
        cout << endl;
    }

}