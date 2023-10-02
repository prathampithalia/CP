// #include <iostream>
#include<bits/stdc++.h>
using namespace std;


void toh(int n, char source , char aux  , char dest){
    if(n==0) return ;

    toh(n-1,source , dest , aux);
    cout<<source<<" "<<dest<<endl;
    toh(n-1 , aux , source , dest);
}


int povv(int n){
    int p=2;
    for(int i=1; i<n ;i++ ){
        p *=2;
    }
return p;
}


int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);


int n; cin>>n;
cout<<  povv(n)-1<<endl;
toh(n,'1','2','3');


}