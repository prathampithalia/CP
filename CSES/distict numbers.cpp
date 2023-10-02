#include <bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

#include<array>

#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define printi(a) printf("%d",a)
#define prints(a) printf("%s",a)

////// #define tc(t) int t; cin >> t; while (t--)
////// #define int long long
#define ll long long


int main() { 

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

 ios_base::sync_with_stdio(0);
    cin.tie(0);

int t,x;
cin>>t;
set<int> a;

while(t--){
	cin>>x;
	a.insert(x);
}
cout<<a.size();

}



