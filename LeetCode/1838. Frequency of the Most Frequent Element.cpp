class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        long long l = 0, r = 0, sum = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        for (; r < n; r++) {
            sum += nums[r];
            if ((r - l + 1) * nums[r] - sum > k)
                sum -= nums[l++];
        }

        return n - l;
    }
};