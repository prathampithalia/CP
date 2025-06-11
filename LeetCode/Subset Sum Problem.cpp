class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }
        for (int i = 1;i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                int no = dp[i - 1][j];
                int yes = 0;
                if (arr[i - 1] <= j)yes = dp[i - 1][j - arr[i - 1]];

                dp[i][j] = (no || yes);
            }

        }
        return dp[n][sum];

    }
};