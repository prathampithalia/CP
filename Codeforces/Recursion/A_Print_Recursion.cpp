#include<bits/stdc++.h>
using namespace std;

void printt(int n) {
    if (n == 0) return;
    cout << "I love Recursion" << endl;
    printt(n - 1);
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    printt(n);
}