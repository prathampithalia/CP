// #include <iostream>
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


bool isvowel(char k) {
    bool ok = false;
    if (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u') ok = true;

    return ok;

}




int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


    string s, t; cin >> s >> t;

    cin >> s >> t;

    int cv1 = 0, cc1 = 0;
    int cv2 = 0, cc2 = 0;



    if (s.size() != t.size()) cout << "No";

    else {

        vector<int> dp(s.size());


        bool ok = false, flag = true;

        for (int i = 0;i < s.size(); i++) {
            if ((isvowel(s[i]) == 1 && isvowel(t[i]) == 1)) dp[i] = 1;
            else if ((isvowel(s[i]) == 0 && isvowel(t[i]) == 0)) dp[i] = 1;
            else dp[i] = 0;
        }

        sort(all(dp));

        if (dp[0] != 0) cout << "Yes";
        else cout << "No";

    }

}