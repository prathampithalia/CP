class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {

        int orr = 0;

        for (auto i : nums) {
            orr |= i;
        }

        int n = nums.size(), ans = 0;

        for (int i = 1; i < (1 << n); i++) {
            int x = 0;
            for (int j = 0; j < n; j++) {
                // cout<<bool(i&(1<<j));
                if (i & (1 << j))
                    x |= nums[j];
            }
            if (x == orr)
                ans++;
            // ce;
        }

        return ans;
    }
};