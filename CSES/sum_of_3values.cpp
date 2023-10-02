// #include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<vector>
// #include<math.h>
// #include<array>
// using namespace std;


// #define all(a) a.begin(),a.end()
// #define for0(i, n) for (int i = 0; i < n; i++)
// #define for1(i, n) for (int i = 1; i <= n; i++)
// #define forab(i, a,b) for (int i = a; i <= b; i++)
// #define loop(i,a,b) for (int i = a; i < b; i++)
// #define bloop(i,a,b) for (int i = a ; i>=b;i--)
// #define printi(a) printf("%d",a)
// #define prints(a) printf("%s",a)
// #define each(a, x) for (auto &a : x)
// #define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
// #define ll long long
// #define MOD 1000000007;


// int main() 
// { 
// // freopen("input.txt", "r", stdin);
// // freopen("output.txt", "w", stdout);
// ios_base::sync_with_stdio(0);
// cin.tie(0);

// //------------------------------------






// // 3 sum

// // i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == target


// int target,n ,anss=0 ,x;
// vector<int> v{};
// vector<int> v2{};

// vector<int> ans{};

// cin>>n>>target;

// int f=0 , j=n-1 , s,ss,e;

// seev(v,n)

// copy(v.begin(), v.end(), back_inserter(v2));

// sort(all(v));
// while(anss!=1 ){


// for0(i,n){ 
// s=v[f];
// e=v[j];
// 	ss=v[i];
// if(s+e > target-ss){ j--;}
// if(s+e < target-ss){ f++;}
// if(s+e ==  target-ss  and (i != f and i != j and j != f)){  ans.push_back(s);ans.push_back(e) ; ans.push_back(ss); anss=1; break;}

// } }

// for0(i,ans.size()){
// 	for(int j=i ; j<n ; j++){
// 		if(ans[i]==v2[j]){ cout<<j<<" "; break;}
// 	}
// }
// //------------------------------------

// }