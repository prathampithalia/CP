#include <iostream>
using namespace std;


#define all(a) a.begin(),a.end()

#define pvec(a,x)  for(auto &a : x){cout<<a<<" ";}
#define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}
#define seev(v,n)  for(int i=0;i<n;i++){ll int ___; cin>>___; v.push_back(___);}


#define each(a, x) for (auto &a : x)
#define vi vector<int>
#define pb push_back
#define ll long long
#define lb lower_bound
#define ub upper_bound
#define sumall(a) accumulate(a.begin(),a.end(),0)
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)




int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


    string txt, pat; cin >> txt >> pat;

    ll int cnt = 0, N = txt.size(), M = pat.size();

    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j
            == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            cnt++;
    }

    cout << cnt;


}
