class Solution {
public:
    vector<int> BF(vector<int> nums, int k) {
        int n = nums.size();
        vector<int> v;
        if (k == 1)
            return nums;
        for (int i = 0; i <= n - k; i++) {
            int mx = -1;
            bool no = false;
            for (int j = i; j < i - 1 + k; j++) {
                if (nums[j] < nums[j + 1] && nums[j] + 1 == nums[j + 1]) {
                    mx = max({ mx, nums[j], nums[j + 1] });
                }
                else
                    no = true;
            }
            if (no)
                v.push_back(-1);
            else
                v.push_back(mx);
        }

        return v;
    }

    vector<int> Optimal(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n - k + 1, -1);
        int i = 0, j = 0;
        while (j < n) {
            if (j > 0 && nums[j] - nums[j - 1] != 1) {
                i = j;
            }
            while (i < j && j - i + 1 > k) {
                i++;
            }
            if (j - i + 1 == k)
                ans[j - k + 1] = nums[j];
            j++;
        }
        return ans;
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans = Optimal(nums, k);

        return ans;
    }
};