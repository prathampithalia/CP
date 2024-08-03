#include<bits/stdc++.h>

using namespace std;


bool solve2(string s) {
    int p1 = s.find("AB");

    if (p1 == -1) {
        return false ;
    }
    s.replace(p1, 2, ".");
    int p2 = s.find("BA");

    if ( p2 == -1) {
        return false;
    }
    return true ;
}

bool solve1(string s) {

    int p1 = s.find("BA");

    if (p1 == -1) {
        return false;
    }
    s.replace(p1, 2, ".");
    int p2 = s.find("AB");

    if ( p2 == -1) {
        return false;;
    }

    return true ;

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s ; cin >> s;
    cout << ((solve2(s) || solve1(s)) ? "YES" : "NO");
}