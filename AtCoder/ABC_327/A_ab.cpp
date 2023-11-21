#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n; cin>>n;
string s; cin>>s;

bool ok=false;
for(int i=0 ;i<n-1 ; i++){
    if(s[i]=='a' && s[i+1]=='b') ok=true;
    if(s[i]=='b' && s[i+1]=='a') ok=true;
}

if(ok) cout<<"Yes";
else cout<<"No";


}