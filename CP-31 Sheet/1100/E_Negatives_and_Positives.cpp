#include <iostream>
#include <vector>

using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    int neg = 0, mini = 1e9 + 7, tot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] < 0)
        {
            neg++;
            A[i] = -A[i];
        }
        tot += A[i];

        // since we can perform the operation any number of time
        // if  neg is even all neg will get positive
        // if neg is odd , we make the minimum element in array neg
        mini = min(A[i], mini);
    }
    if (neg & 1)
        cout << tot - 2 * mini << endl;
    else
        cout << tot << endl;
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