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

bool is_perfect(int n){
    for(int i = 0 ;i<31 ; i++){
        if(n== (1<<i)){
            return true;
        }
    }
    return false;
}

bool ten(int n){
    string t = to_string(n) ;
    string p = "10";
    // 1073741824
    for(int i = 1 ;i <10   ;i++)
    {
        if(p==t){
            return true;
        }  
        p += '0';
    }
    return false;
}

int ind(int n){
    string tt = to_string(n);
    return tt.size() - 1;
}


int lowbit(int x){
	return x&(-x);
}


int main() 
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);


    test_cases(Y) {
        int x;
        cin >> x;
        int w = lowbit(x);
        while (!(w ^ x) || !(w & x))w++;
        cout << w << endl;
    }


}