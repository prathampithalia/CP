#include <bits/stdc++.h>
using namespace std;
 
 
#define all(a) a.begin(),a.end()
#define forr(i,n) for(int i=0 ; i< n ;i++) 
#define pvec(x)  for(auto &a : x){cout<<a<<" ";}
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


string s;
cin>>s;


int n = s.size();

vector<int> z(n);
int x = 0, y = 0;
for (int i = 1; i < n; i++) {
z[i] = max(0,min(z[i-x],y-i+1));
while (i+z[i] < n && s[z[i]] == s[i+z[i]]) {
x = i; y = i+z[i]; z[i]++;
}
}

vector<int> pi(n);
for (int i = 0; i < n; i++)
    for (int k = 0; k <= i; k++)
        if (s.substr(0, k) == s.substr(i-k+1, k))
            pi[i] = k;


pvec(z)
cout<<endl;
pvec(pi)
}


