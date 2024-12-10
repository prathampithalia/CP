class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        double ans = INT_MIN, p = nums[0], s = nums[n - 1];
        ans = max({ ans, p, s });

        for (int i = 1; i < n; i++) {
            if (p == 0)
                p = 1;
            if (s == 0)
                s = 1;
            p *= nums[i];
            s *= nums[n - i - 1];
            ans = max({ ans, p, s });
        }
        // ans = max({ans, p, s});

        return ans;
    }
};