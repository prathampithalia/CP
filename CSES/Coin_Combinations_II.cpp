#include <iostream>
using namespace std;

#define MOD 1000000007 

const int N = 100, M = 1000000;
int t[N + 1][M + 1];

void getMaxNumberOfWays(int coins[], int n, int sum) {
    // int t[n + 1][sum + 1];
    // initialization
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (i == 0)
                t[i][j] = 0;
            if (j == 0)
                t[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= sum; j++)
            if (coins[i - 1] <= j)
                t[i][j] = ((t[i - 1][j]) % MOD + (t[i][j - coins[i - 1]]) % MOD) % MOD;
            else
                t[i][j] = (t[i - 1][j]) % MOD;

}


int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 


    int n, x;
    cin >> n >> x;
    int coins[n];
    for (int i = 0; i < n; i++) cin >> coins[i];

    getMaxNumberOfWays(coins, n, x);

    cout << t[n][x];

}
