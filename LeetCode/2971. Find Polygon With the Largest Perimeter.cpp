class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = -1;
        vector<long long> p(n);
        p[0] = nums[0];

        for (int i = 1; i < n; i++) {
            p[i] = p[i - 1] + nums[i];
        }

        for (int i = 1; i < n; i++) {
            if (nums[i] < p[i - 1])
                ans = max(ans, p[i]);
        }

        return ans;
    }
};