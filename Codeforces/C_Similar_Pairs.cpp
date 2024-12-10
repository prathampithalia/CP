
#include<bits/stdc++.h>

using namespace std;
#define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve() {
    int n;
    cin >> n;
    vector<int> A(n), e, o;
    unordered_map<int, int> mpe, mpo;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (A[i] & 1) {
            mpo[A[i]]++;
            o.push_back(A[i]);
        }
        else {
            mpe[A[i]]++;
            e.push_back(A[i]);
        }
    }

    sort(e.begin(), e.end());
    sort(o.begin(), o.end());

    //debug(e,o);

    if (e.size() % 4 == 0) {
        cout << "YES" << endl;
        return;
    }
    else {

        if (e.size() >= o.size()) {
            bool ok = false;
            if (e.size() % 2 == 0)cout << "YES" << endl;
            else {
                for (auto i : o) {
                    if (mpe.find(i - 1) != mpe.end() ||
                        mpe.find(i + 1) != mpe.end())ok = true;
                }
                if (ok)yes
                else no
            }
        }
        else {
            if (o.size() % 2 == 0)yes
            else {
                bool ok = false;
                for (auto i : e) {
                    if (mpo.find(i - 1) != mpo.end() ||
                        mpo.find(i + 1) != mpo.end())ok = true;

                }
                if (ok)yes
                else no
            }
        }

    }


}




signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}