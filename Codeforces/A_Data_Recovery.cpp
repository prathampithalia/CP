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
#define ll long long
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)





int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, mi, ma;
    cin >> n >> m >> mi >> ma;

    bool mi_c = false, ma_c = false;

    int c = 0;
    vector<int> t(m);

    bool flag1 = true, flag2 = true;

    forr(i, m) {
        cin >> t[i];
        if (t[i] == mi) mi_c = true;
        if (t[i] == ma)ma_c = true;
        if (t[i] > ma)flag2 = false;
        if (t[i] < mi)flag1 = false;
    }

    if (!mi_c)c++;
    if (!ma_c)c++;


    if (n - m >= c && flag1 && flag2) cout << "Correct";
    else cout << "Incorrect";



}