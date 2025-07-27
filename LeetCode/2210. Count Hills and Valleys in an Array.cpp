class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> v;
        nums.push_back(-1);
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                v.push_back(nums[i]);
            }
        }

        int n = v.size();
        int cnt = 0;
        if (n <= 2)return 0;
        for (int i = 1; i < n - 1; i++) {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])cnt++;
            if (v[i] < v[i - 1] && v[i] < v[i + 1])cnt++;
        }
        return cnt;
    }
};