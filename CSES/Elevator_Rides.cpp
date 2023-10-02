#include <bits/stdc++.h>
using namespace std;




#define ll long long

int main() 
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);


int n, k;
cin>>n>>k;

ll int v[n];
for(int i=0 ; i<n ;i++){
    cin>>v[i];
}

sort(v,v+n);

int cnt=1;
int s=0   , e= n-1;

        int t=v[e]+v[s];
while(s<e){
    

    if(t <= k){

        s++;
        t+=v[s];
        // cout<<t<<" -- : "<<v[s]<<" "<<v[e]<<endl;
    }
    else{
        // cout<<v[s]<<" - "<<v[e]<<endl;
        cnt++;
        e--;
        s--;
        t=v[e];
        
    }

}
cout<<cnt<<endl;

}
