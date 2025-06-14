class Solution {
public:

    int memo(int ind, int buy, vector<int>& arr, vector<vector<int>>& dp) {

        if (ind == arr.size()) return 0;

        if (dp[ind][buy] != -1) return dp[ind][buy];
        int profit;
        if (buy) {
            profit = max(-arr[ind] + memo(ind + 1, 0, arr, dp),
                0 + memo(ind + 1, 1, arr, dp));
        }
        else {
            profit = max(arr[ind] + memo(ind + 1, 1, arr, dp),
                0 + memo(ind + 1, 0, arr, dp));
        }
        return dp[ind][buy] = profit;
    }

    int best(vector<int> arr) {
        int n = arr.size();
        int profit = 0;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] < arr[i + 1])profit += arr[i + 1] - arr[i];
        }
        return profit;
    }
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        // vector<vector<int>> dp(n+1, vector<int>(3 , -1 ));

        // return memo(0 ,1 , prices , dp);

        return best(prices);
    }
};