#include<bits/stdc++.h>
using namespace std;


#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl
#define ce cout<<endl
#define forr(i,n) for(int i=0 ; i<n ; i++)
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}

#define each(a, x) for (auto &a : x)
#define ppair(x) each(i,x)cout<<i.first<<" "<<i.second<<endl;


#define ll long long
#define MOD 1000000007 
#define test_cases(T) int T ; cin>>T ; while(T--)




int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(U) {
        int n, k; cin >> n >> k;
        int mx = 0;
        vector<int> v(50);

        forr(i, n) {
            int x; cin >> x;
            mx = max(mx, x);
            v[x - 1] = x;
        }

        int t = 0;

        forr(i, mx) {
            if (v[i] == 0) t += i + 1;
        }

        if (k < t)pno;
        else if (k == t) pyes;
        else {
            int kk = k - t;
            mx++;
            bool ok = false;
            while (kk > 0) {
                kk = kk - mx;
                mx++;
                // cout << mx <<' ';
                if (kk == 0)ok = true;
            }

            if (ok) pyes;
            else pno;
        }

    }


}