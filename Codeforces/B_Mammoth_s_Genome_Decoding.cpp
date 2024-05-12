#include<bits/stdc++.h>

using namespace std;

#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
#define ce cout << endl
#define forr(i, n) for (int i = 0; i < n; i++)
#define pvec(x) for (auto & a: x) { cout << a << " ";}
#define pvec2d(v) for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}

#define each(a, x) for (auto & a: x)
#define ppair(x) each(i, x) cout << i.first << " " << i.second << endl;

#define ll long long
#define MOD 1000000007
#define test_cases(T) int T; cin >> T; while (T--)



signed main() {



    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    int A = 0, G = 0, C = 0, T = 0, x = 0;

    for (auto i : s) {
        if (i == 'A')A++;
        if (i == 'G')G++;
        if (i == 'C')C++;
        if (i == 'T')T++;
        if (i == '?')x++;
    }

    int f = max({ A,G,C,T });

    if (f - A + f - G + f - C + f - T <= x) {
        A = f - A;
        G = f - G;
        C = f - C;
        T = f - T;  
        int rem = 0;

        for (int i = 0; i < n;i++) {
            if (s[i] == '?') {
                if (A > 0) {
                    s[i] = 'A';
                    A--;
                }
                else if (G > 0) { s[i] = 'G'; G--; }
                else if (C > 0) { s[i] = 'C'; C--; }
                else if (T > 0) { s[i] = 'T'; T--; }
                else rem++;
            }
        }
        if( rem == 0) cout<< s << endl;    
        else if( rem % 4 != 0) cout<< "===" << endl;
        else{
            int cv = 0;
            for (int i = 0; i < n;i++) {
                if (s[i] == '?') {
                    if (cv == 0) { s[i] = 'A'; cv = 1; }
                    else if (cv == 1) { s[i] = 'G'; cv = 2; }
                    else if (cv == 2 ) { s[i] = 'C'; cv = 3; }
                    else if ( cv == 3){s[i] ='T' ; cv= 0;}
                }
            }
            cout << s << endl;
        }
    }
    else cout << "===" << endl;


}