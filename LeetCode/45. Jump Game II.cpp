class Solution {
public:
    int jump(vector<int>& nums) {

        int n = nums.size();

        int maxJump = 0, jumps = 0, reached = 0;

        for (int i = 0; i < n - 1; i++) {
            maxJump = max(maxJump, nums[i] + i);

            if (i == reached) {
                jumps++;
                reached = maxJump;
            }
        }

        return jumps;
    }
};