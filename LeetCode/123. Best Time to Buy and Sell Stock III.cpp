class Solution {
public:
    int memo(int ind, int buy, int cap, vector<int>& arr,
        vector<vector<vector<int>>>& dp) {

        if (ind == arr.size() || cap == 0)
            return 0;

        if (dp[ind][buy][cap] != -1)
            return dp[ind][buy][cap];
        int profit;
        if (buy) {
            profit = max(-arr[ind] + memo(ind + 1, 0, cap, arr, dp),
                0 + memo(ind + 1, 1, cap, arr, dp));
        }
        else {
            profit = max(arr[ind] + memo(ind + 1, 1, cap - 1, arr, dp),
                0 + memo(ind + 1, 0, cap, arr, dp));
        }
        return dp[ind][buy][cap] = profit;
    }

    int best(vector<int> prices) {


        int buy1 = INT_MAX;
        int profit1 = INT_MIN;
        int buy2 = INT_MAX;
        int profit2 = INT_MIN;
        for (int i = 0; i < prices.size(); i++) {
            buy1 = min(buy1, prices[i]);
            profit1 = max(profit1, prices[i] - buy1);
            buy2 = min(buy2, prices[i] - profit1);
            profit2 = max(profit2, prices[i] - buy2);
        }
        return profit2;
    }

    int maxProfit(vector<int>& prices) {

        // int n = prices.size();
        // vector<vector<vector<int>>> dp(
        //     n + 1, vector<vector<int>>(3, vector<int>(4, -1)));

        // return memo(0, 1, 2, prices, dp);

        return best(prices);
    }
};