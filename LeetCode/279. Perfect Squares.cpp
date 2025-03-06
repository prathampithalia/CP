class Solution {
public:
    int helper(vector<int>& v, int ind, int w, vector<vector<int>>& dp) {
        // Base case
        if (w == 0) return 0;
        if (ind < 0) return INT_MAX;

        if (dp[ind][w] != -1) return dp[ind][w];

        int notTake = helper(v, ind - 1, w, dp);

        int take = INT_MAX;
        if (v[ind] <= w) {
            int res = helper(v, ind, w - v[ind], dp);
            if (res != INT_MAX) take = 1 + res;
        }
        return dp[ind][w] = min(take, notTake);
    }

    int numSquares(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        vector<int> v;
        for (int i = 1; i * i <= n; i++) {
            v.push_back(i * i);
        }

        int m = v.size();
        vector<vector<int>> dp(m, vector<int>(n + 1, -1));

        int val = helper(v, m - 1, n, dp);
        return val;
    }
};
