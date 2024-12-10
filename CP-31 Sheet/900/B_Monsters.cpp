#include<bits/stdc++.h>

using namespace std;
// #define int long long

#define pii pair<int,int> 
#define minpq(int) priority_queue<int, vector<int>, greater<int> >


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif


bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first)return a.second < b.second;
    return a.first > b.first;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<pair<int, int>> pq;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int h = x % k;
        if (h == 0)h = k;
        pq.push_back({ h ,i + 1 });
    }
    sort(pq.begin(), pq.end(), comp);
    // debug(pq);
    for (auto i : pq)cout << i.second << ' ';
    cout << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}