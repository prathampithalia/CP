
// // #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;


// #define all(a) a.begin(),a.end()
// #define fi first
// #define se second
// #define pb push_back
// #define pyes cout<<"YES"<<endl
// #define pno cout<<"NO"<<endl
// #define ce cout<<endl
// #define forr(i,n) for(int i=0 ; i<n ; i++)
// #define pvec(x)  for(auto &a : x){cout<<a<<" ";}
// #define pvec2d(v) for(int i=0 ; i<v.size() ; i++){for(int j=0 ; j<v[i].size() ; j++){cout<<v[i][j]<<" ";}cout<<endl;}

// #define each(a, x) for (auto &a : x)
// #define ll long long
// #define MOD 1000000007
// #define test_cases(T) int T ; cin>>T ; while(T--)

// bool compf(pair<int, int> a, pair<int, int> b) {

//     if( a.first == b.first )return a.second <b.second ;
//     else return a.first > b.first;

// }







// int main() 
// {

// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif 

// ios_base::sync_with_stdio(0); cin.tie(0);

// test_cases(Y){
//     int n; cin>>n;
//     string s; cin>>s;

//     vector<int> v(n);
//     forr(i,n){
//         if(s[i]=='a' || s[i]=='e') v[i] = 1;
//     }

// int r = 0;
// if( n > 3){
// for(int i=0 ; i<n ; i++){
//     if(v[i] == 0 && v[i+1] == 1 ){
//         if( v[i+2] == 0 && v[i+3] == 1){
//             cout<< s[i]<<s[i+1]<<'.';
//             // i+
//             // r = i+1 ;
//             i++;
//         }
//         if( v[i+2]== 0 && v[i+3] == 0){
//             cout<< s[i]<<s[i+1]<<s[i+2]<<'.';
//             i+=2;
//         }
//         r = i ;

//     }
// }

// for(int i = r ;i<n ;i++)cout<<s[i];

// }
// else{
//     if( n==1 ){
//         cout<< s ;
//     }
//     if( n==2){
//         cout<< s ;
//     }
//     if( n==3){
//         if( v[0]==0 && v[1]==1){
//             if(v[2] == 0) cout<<s;
//             else{
//                 cout<< s[0]<<s[1]<<'.'<<s[2];
//             }
//         }
//     }
// }


// ce;
// }



// }





// int main() 
// {
//     {

// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif 

// ios_base::sync_with_stdio(0); cin.tie(0);

// test_cases(Y) {
//     int n; cin >> n;

//     string s; cin >> s;

//     //  cvc , cv
//     vector<int> v(n);
//     forr(i, n) {
//         if (s[i] == 'a' || s[i] == 'e') v[i] = 1;
//     }

//     vector<int> p{};

//     if (n > 3) {

//         for (int i = 0; i < n; i++) {

//             if (v[i] == 1) {
//                 if (v[i + 1] == 0 && (i + 1) < n) {
//                     if( (i+2) < n){
//                     if (v[i + 2] == 1) {
//                         p.pb(i + 1);
//                     }
//                     else p.pb(i + 2);
//                 }
//                 }
//             }
//         }

//         int j = 0;

//         for (int i = 0; i < n; i++) {
//             cout << s[i];
//             if ((i + 1) == p[j] && p[j] != n) {
//                 cout << ".";
//                 j++;
//             }
//         }

//         ce;

//     }
//     else cout << s << endl;
// }



// }
// }


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
#define MOD 1000000007 
#define test_cases(T) int T ; cin>>T ; while(T--)


bool compf(pair<int, int> a, pair<int, int> b) {

    if( a.first == b.first )return a.second <b.second ;
    else return a.first > b.first;

}



int main() 
{


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    ios_base::sync_with_stdio(0); cin.tie(0);

    test_cases(Y) {
        int n; cin >> n;

        string s; cin >> s;
        cout << s[0];
        for (int i = 1;i < n;i++) {
            if ((s[i + 1] == 'a' || s[i + 1] == 'e')) cout << ".";
            cout << s[i];
        }



        ce;

    }

}