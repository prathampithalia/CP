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


    test_cases(Y){
        int n;  cin>>n;
        int t=n;
        vector<int> ans(3);

        bool ok1=false , ok2=false , ok3=false;
        int i1= 0 , i2=0 ;
        for(int i=2 ; i< t ; i++)
        {
            if( n% i == 0) {
                ans[0]=i;
                n= n / i;
                ok1=true;
                i1=i;
                break;
            }
        }
        if( ok1){
        
        for(int i=i1+1 ; i< t ; i++)
        {
            if( n % i == 0) {
                ans[1]=i;
                n= n / i;
                ok2=true;
                i2= i1;
                break;
            }
        }

        }
        if( ok2 ){
        
        int z= ans[0] * ans[1];

        if( t % z == 0) {
            ans[2]= (t/z);
            if( t/z == 1) ok3=false;
            else ok3=true;
        }
            

        }

    if( ok1 && ok2 && ok3){
        if( ans[0] != ans[1] && ans[1] != ans[2] && ans[0] != ans[2]){
            pyes;
            pvec(ans)
            ce;
        }
        else pno;

    }
    else pno;

    }


    }