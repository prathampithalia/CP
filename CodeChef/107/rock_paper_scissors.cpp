#include <iostream>
using namespace std;

int main() {


int t; cin >> t;
while (t--) {

    int n; cin >> n;

    string a, b;
    cin >> a >> b;
    int p1 = 0, p2 = 0;
    int d = 0;
    for (int i = 0; i < n;i++) {
        if (a[i] == 'R') {
            if (b[i] == 'S')p1++;
            if (b[i] == 'P') { p2++; d++; }
        }
        if (a[i] == 'P') {
            if (b[i] == 'R')p1++;
            if (b[i] == 'S') { p2++; d++; }
        }
        if (a[i] == 'S') {
            if (b[i] == 'P')p1++;
            if (b[i] == 'R') { p2++; d++; }
        }


    }

    if (p1 > p2) cout << 0 << endl;
    if (p1 < p2) {
        {
            cout << (p2 - p1) / 2 + 1 << endl;
        }
    }
    if (p1 == p2) cout << 1 << endl;

}


}
