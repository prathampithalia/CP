#include<bits/stdc++.h>

using namespace std;

int ind = 0;
void even(vector<int>& v, int n) {

    // if( ind < 0 ) return;
    if (n < 0) return;

    if ((n) % 2 == 0)cout << v[n] << ' ';
    even(v, n - 1);


}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];


    if (n % 2 == 0) even(v, n - 2);
    else even(v, n);



}