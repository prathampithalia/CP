#include<bits/stdc++.h>

using namespace std;

#define fi       first
#define se       second
#define ppair(x)   each(i, x) cout << i.first << " " << i.second << endl;

#define ll    long long
#define MOD   1000000007
#define test_cases(T) int T; cin >> T; while (T--)
#define int ll
const int N = 300005;

int h[300005], pows[300005];
int p = 331;
void prec() {
    pows[0] = 1;
    for (int i = 1; i < 300005; i++)
    {
        pows[i] = (pows[i - 1] * p) % MOD;
    }
}

int getHash(int l, int r)
{
    return ((h[r + 1] - (h[l] * pows[r - l + 1]) % MOD) + MOD) % MOD;
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    prec();
    test_cases(Y) {
        string s; cin >> s;
        int n = s.size();
        if (n & 1) cout << 0 << endl;
        else {

            for (int i = 0; i < n; i++)
            {
                h[i + 1] = (h[i] * p + s[i]) % MOD;
            }

            int cnt = 0;
            for (int i = 0; i < n / 2; i++)
            {
                int l1 = 0, r1 = i;       // T1
                int l2 = r1 + 1, r2 = l2 + i;      // T2
                int l3 = r2 + 1, r3 = i + n / 2; // T3
                int l4 = r3 + 1, r4 = n - 1;      // T3
                if (getHash(l1, r1) == getHash(l2, r2) && getHash(l3, r3) == getHash(l4, r4))
                {
                    cnt++;
                }

            }

            if (getHash(0, n / 2 - 1) == getHash(n / 2, n - 1))cnt++;

            cout << cnt << endl;
        }

    }



}