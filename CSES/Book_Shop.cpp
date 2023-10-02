// #include <iostream>
#include<bits/stdc++.h>
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
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define sumall(a) accumulate(a.begin(),a.end(),0)
#define MOD 1000000007;
#define test_cases(T) int T ; cin>>T ; while(T--)



int Knapsack(int wt[], int val[], int W, int n) {
	// every recursive solution will have a base condition 
  // for base condition we need to think of the smallest valid input that we can pass 
  // array size can be atleast 0 || min weight can be 0 but not negetive; 
	if (n == 0 || W == 0)
		return 0;

	// these are the choices we are having 
	if (wt[n - 1] <= W) {
		return max(val[n - 1] + Knapsack(wt, val, W - wt[n - 1], n - 1),
		           Knapsack(wt, val, W, n - 1));
	}
	else if (wt[n - 1] > W) // if the weight is greater then the required weight there is no sence for taking that value. 
		return Knapsack(wt, val, W, n - 1); // return as it is by redusing the size of array 
	else
		return -1; 
}








int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

int n,x;
cin>>n>>x;

int h[n], s[n];

forr(i,n) cin>>h[i];
forr(i,n) cin>>s[i];

int cnt=0;



cout << Knapsack(h, s, x, n) << endl;




}


   