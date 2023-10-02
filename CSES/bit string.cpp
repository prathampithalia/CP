#include <bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<array>
using namespace std;


#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define forab(i, a,b) for (int i = a; i <= b; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define printi(a) printf("%d",a)
#define prints(a) printf("%s",a)
#define each(a, x) for (auto &a : x)
#define ll long long

#define MOD 1000000007;


int main() 
{ 
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);


int ans=1, n;
cin>>n;

for(int i=0 ; i<n ; i++){
    ans*=2;
    ans%=MOD;

}

cout<<ans;

}