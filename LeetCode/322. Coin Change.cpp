
int helper(vector<int> coins, int ind, int W, vector<vector<long long>>& dp) {

    if (ind == 0) {
        if (W % coins[ind] == 0)
            return W / coins[ind];
        else
            return INT_MAX;
    }

    if (dp[ind][W] != -1) {
        return dp[ind][W];
    }

    // not Taken
    long long notTake = helper(coins, ind - 1, W, dp);

    // Taken
    long long Take = INT_MAX;
    if (coins[ind] <= W) {
        Take = (long long)1 + helper(coins, ind, W - coins[ind], dp);
    }

    return dp[ind][W] = min(Take, notTake);
}

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(amount + 1, -1));

        long long val = helper(coins, n - 1, amount, dp);
        if (val >= INT_MAX)
            return -1;
        else
            return val;
    }
};