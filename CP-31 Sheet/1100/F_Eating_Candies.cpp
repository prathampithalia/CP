#include <iostream>
#include <vector>

using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    int low = 0, high = n - 1, alice = A[0], bob = A[n - 1];

    int ans = 0;

    while (low < high)
    {
        if (alice == bob)
        {
            ans = max(ans, low + 1 + n - high);
        }
        if (alice < bob)
        {
            low++;
            alice += A[low];
        }
        else
        {
            high--;
            bob += A[high];
        }
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