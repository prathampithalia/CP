#include <iostream>
#include <vector>

using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n), B(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];

    int tot = 0, mx = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (i + 1 > k)
            break;

        tot += A[i];
        mx = max(mx, B[i]);
        ans = max(ans, tot + mx * (k - (i + 1)));
    }

    cout << ans << endl;
}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}