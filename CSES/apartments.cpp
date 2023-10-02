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


#define pvec(a,x)  for(auto &a : x){cout<<a<<" ";}
#define pmultiset(__i,a)  for (auto __i = a.begin(); __i != a.end(); __i++){cout << *__i << " ";}
#define each(a, x) for (auto &a : x)

#define seems(a,n) for(int i=0; i<n;i++){int x; cin>>x; a.insert(x);} 
#define seev(v,n) for(int i=0;i<n;i++){int ___; cin>>___; v.push_back(___);}
#define ll long long
#define vi vector<int>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define sumall(a) accumulate(a.begin(),a.end(),0)
#define MOD 1000000007;


int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);


int n,m,k;
cin>>n>>m>>k;
vi a{};
vi b{};
seev(a,n)
seev(b,m)

sort(all(a));
sort(all(b));
int i=0 , j=0 , cnt=0;

	for(int i = 0, j = 0; i < n && j < m;){
		if(a[i] < b[j] - k){
			i++;
		}else if(a[i] > b[j] + k){
			j++;
		}else{
			cnt++;
			i++;
			j++;
		}
	}
	
	cout << cnt << endl;

}


