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
#define ppair(x) each(i,x)cout<<i.first<<" "<<i.second<<endl;


#define ll long long
#define MOD 1000000007 
#define test_cases(T) int T ; cin>>T ; while(T--)


bool compf(pair<int, int> a, pair<int, int> b) {

    if( a.first == b.first )return a.second <b.second ;
    else return a.first > b.first;

}

int Substring(vector<char> &s)
{
 
    int ans = 1, temp = 1;
 
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
 
    return ans;
}

int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


    test_cases(U) {
        int n, q; cin >> n >> q;

        vector<char> s(n);
        forr(i, n)cin >> s[i];

        // cout<< Substring(s)<<" ";

        int ans = 1, temp = 1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                ++temp;
            }
            else {
                ans = max(ans, temp);
                temp = 1;
            }
        }
        ans = max(ans, temp);

        cout << ans << " ";

        int nn = n;

        while (q--) {
            char el; cin >> el;
            s.push_back(el);

            if (el != s[n]) {
                temp = 1;
                for (int i = n; i < s.size(); i++) {
                    if (s[i] == s[i - 1]) {
                        ++temp;
                    }
                    else {
                        ans = max(ans, temp);
                        temp = 1;
                    }
                }
                ans = max(ans, temp);

                cout << ans << " ";
            }
            else {
                int st = n;
                temp = 1;
                while (s[st] == el) {
                    st--;
                }
                st++;
                temp = n - st;
                for (int i = n; i < s.size(); i++) {
                    if (s[i] == s[i - 1]) {
                        ++temp;
                    }
                    else {
                        ans = max(ans, temp);
                        temp = 1;
                    }
                }
                ans = max(ans, temp);

                cout << ans << " ";
                // cout<<"sd[p]"<<temp << " ";
            }

        }
        ce;

    }


}