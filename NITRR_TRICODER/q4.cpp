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
freopen("iq4.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(0); cin.tie(0);

int n, m, b;

cin >> n >> m >> b;

int t = n;

vector<int> qno(m);

int cost1 = 0;


vector<int> newqno(m);

while (t--) {

    int xi, ki, mi;

    cin >> xi >> ki >> mi;

    if (mi == 1) {
        int ind1;
        cin >> ind1;
        int cost = 0;

        if (ki == 1) {
            cost = xi;
        }
        else {
            cost = (xi + (ki * b));
        }

        qno[ind1 - 1] = min(cost, 1000);


    }

    else {
        for (int i = 0; i < mi;i++) {
            int mdis;
            cin >> mdis;
            cost1 = (xi + (ki * b));

            newqno[mdis - 1] = 1;
            if( cost1 > qno[mdis-1]) newqno[mdis-1]=0;

        }

    }


}

int fans = cost1;

for (int i = 0;i < m;i++) {
    // fans += qno[i];
    if (newqno[i] == 0) fans += qno[i];
}

cout << fans;


}