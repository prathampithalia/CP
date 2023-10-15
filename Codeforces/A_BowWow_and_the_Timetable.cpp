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



int pv(int n){
	if( n==0 )return 1;
	return 10*pv(n-1);
}



int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 

	ios_base::sync_with_stdio(0); cin.tie(0);


	string s;
	cin >> s;
	int n = s.length();
	int counter = 0;
	for (int i = 1; i < n; i++)
	{
		if (s[i] == '1')
			{counter = 1;
            break;
            }

	}
	if (counter == 0)
	{
		cout << n / 2 << endl;
	}
	else
	{
		n += 1;
		cout << n / 2 << endl;
	}


}