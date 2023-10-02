#include<iostream>

#include<algorithm>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int n , cnt ;
cnt=0;
cin>>n;
for(int i=1 ;i<n+1;i++){
for(int j=1 ;j<i+1;j++){
    if(i%j==0){
        cnt+=j;
    }
}
}

cout<<cnt;


}