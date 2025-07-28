class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        //since n <= 16 
        // we check for all possible subsets , using mask

        int n = nums.size();
        int ans = 0, OR = 0;
        for (auto i : nums) OR |= i;

        for (int i = 0;i < (1 << n); i++) {
            int subOR = 0;
            for (int ind = 0; ind < n; ind++) {
                if (i & (1 << ind))subOR |= nums[ind];
            }
            if (subOR == OR)ans++;
        }

        return ans;
    }
};