class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long cnt = 0, invalid = -1, maxi = -1, mini = -1;

        for (int i = 0;i < nums.size(); i++) {
            // Valid 
            if (nums[i] < minK || nums[i] > maxK)invalid = i;
            if (nums[i] == minK) mini = i;
            if (nums[i] == maxK) maxi = i;
            int valid = max((long long)0, min(mini, maxi) - invalid);
            cnt += valid;
        }
        return cnt;
    }
};