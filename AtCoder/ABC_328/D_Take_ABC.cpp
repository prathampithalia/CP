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







int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


    string s; cin >> s;

    int n = s.size();

    int v[n]{ 0 };

    int i = 0;
    bool ok = true;

    while (s.find("ABC") != std::string::npos) {
        // if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
        if (s[i % s.size()] == 'A' && s[(i + 1) % s.size()] == 'B' && s[(i + 2) % s.size()] == 'C') {

            // v[i]=1;
            // v[i+1]=1;
            // v[i+2]=1;

            // s[i]='#';
            // s[i+1]='#';
            // s[i+2]='#';
            s.erase(i % s.size(), 3);
        }
        // i = (i++) % s.size();
        i++;
    }

    cout << s;



}