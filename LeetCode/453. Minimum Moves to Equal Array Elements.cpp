class Solution {
public:
    int minMoves(vector<int>& nums) {
        // LOGIC : incrementing n-1 is just equivalent to decrementing 1 elem by
        // 1
        int mini = INT_MAX;
        int ans = 0;
        for (auto i : nums)mini = min(mini, i);

        for (auto i : nums)
            ans += (i - mini);

        return ans;
    }
};