class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        int n = nums.size();
        vector<int> d(n);

        int mini = nums[0];

        // 0 1 2 3 4 5 6 7 8

        bool less = false;

        for (int i = 0; i < n; i++) {
            if (i % 3 == 0)
                mini = nums[i];
            if ((nums[i] - mini) <= k)
                d[i] = 1;
            else
                less = true;
        }
        if (less)
            return ans;

        for (int i = 0; i < n; i += 3) {
            vector<int> t(nums.begin() + i, nums.begin() + i + 3);
            ans.push_back(t);
        }
        return ans;
    }
};