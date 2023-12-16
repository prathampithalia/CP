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


bool compf(pair<int, int> a, pair<int, int> b) {

	if( a.first == b.first )return a.second <b.second ;
	else return a.first > b.first;

}



int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);


test_cases(Y) {
    int n; cin >> n;
    string s; cin >> s;

    string ss = s;

    ll int cnt = 0, ans = INT_MIN;
    int move = 0;
    vector<ll int> pref(n);

    for (int i = 0;i < n;i++) {
        if (s[i] == 'L') {
            pref[i] = i;
        }
        else {
            pref[i] = (n - i - 1);
        }
    }

    for (ll int i = 0;i < n; i++) {
        ll int j = 0;
        while (move <= (i + 1) && j < n) {
            if (j < n / 2) {

                if (s[j] == 'L') {
                    s[j] = 'R';
                    pref[j] = max((n - j - 1), pref[j]);
                    move++;
                }

            }

            else {

                if (s[j] == 'R') {
                    s[j] = 'L';

                    pref[j] = max((j), pref[j]);
                    move++;
                }


            }
            j++;
        }

        // cout<< s<<endl;
        cout << accumulate(all(pref), 0) << " ";

    }

    ce;
}


}