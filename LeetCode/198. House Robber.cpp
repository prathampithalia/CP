int helper(vector<int> a) {

    int n = a.size();
    vector<int> dp(n + 1, -1);

    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    }

    return dp[n - 1];
}

class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        if (n == 1) return nums[0];
        // vector<int> a1 , a2 ;
        // for(int i = 0; i<n ; i++){
        //     if( i != 0 )a1.push_back(nums[i]);
        //     if( i != n-1 )a2.push_back(nums[i]);
        // }

        int ans = helper(nums);

        return ans;
    }
};