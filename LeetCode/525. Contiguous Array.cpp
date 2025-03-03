class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int ans = 0, sum = 0;

        unordered_map<int, int> firstOcc;
        firstOcc[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] == 1 ? 1 : -1);

            if (firstOcc.find(sum) != firstOcc.end())
                ans = max(ans, i - firstOcc[sum]);

            else
                firstOcc[sum] = i;
        }

        return ans;
    }
};