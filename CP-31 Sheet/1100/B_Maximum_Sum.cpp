#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define int long long


#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif



int sol1(vector<int> A, int tot, int k)
{
    int n = A.size();
    int low = 0, high = n - 1;
    while (k--)
    {
        if (A[low] + A[low + 1] <= A[high])
        {
            tot -= A[low] + A[low + 1];
            low += 2;
        }
        else
        {
            tot -= A[high];
            high--;
        }
    }
    return tot;
}

int sol2(vector<int> A, int tot, int k)
{
    int n = A.size();
    int low = 0, high = 0;
    for (int i = 0; i < 2 * k; i++)
    {
        low += A[i];
    }
    int j = n - 1;

    while (k--)
    {
        high += A[j];
        j--;
    }
    return tot - (min(low, high));
}

void solve()
{
    int n, k;
    cin >> n >> k;

    int tot = 0;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        tot += A[i];
    }
    sort(A.begin(), A.end());

    vector<int> p(n+1);
    for(int i= 0 ; i<n ; i++){
        p[i+1] = p[i]+A[i];
    }
    int ans = 0 ;
    for(int i = 0 ;i<=k; i++){
        ans = max(ans , p[n-i] - p[2*(k-i)]);
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