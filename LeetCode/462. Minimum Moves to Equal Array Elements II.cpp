class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int  n = nums.size();

        sort(nums.begin(), nums.end());
        int move = 0, same = nums[n / 2];
        for (int i = 0; i < n; i++) {
            move += abs(same - nums[i]);
        }

        return move;
    }
};