class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int n = nums.size(), l = 0, r = k;
        int ans = sum;

        while (r < n) {
            sum -= nums[l];
            l++;
            sum += nums[r];
            r++;

            ans = max(ans, sum);
        }

        return double(ans) / k;
    }
};