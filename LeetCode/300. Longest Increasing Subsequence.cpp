class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        // int n = nums.size();
        // int ans = 1;
        // vector<int> dp(n);
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < i; j++) {
        //         if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
        //             dp[i] = dp[j] + 1;
        //         }
        //     }
        // }
        // return *max_element(dp.begin(), dp.end()) + 1;
        // int n = s1.size();
        // vector<vector<int>>dp(n + 1, vector<int>(n + 1, 0)) ;

        // int ans = 1;
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         if (s1[i - 1] < s1[j - 1]) {
        //             dp[i][j] = 1+dp[i-1][j-1];
        //         } else
        //             dp[i][j] = max(dp[i - 1][j] , dp[i][j-1]);
        //         ans = max(ans, dp[i][j]);
        //     }
        // }
        // return ans ;

        int n = arr.size();
        vector<int> temp ;
        
        temp.push_back(arr[0]);

        for(int i = 1 ; i<n ; i++){
            if( arr[i] > temp.back()){
                temp.push_back(arr[i]);
            }
            else{
                int ind = lower_bound(temp.begin(),temp.end() , arr[i]) - temp.begin();
                temp[ind] = arr[i];
            }
        }

        return temp.size();

    }
};


    