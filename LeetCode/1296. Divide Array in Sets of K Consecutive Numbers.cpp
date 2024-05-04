class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
    int n = nums.size();

    unordered_map<int, int> v;
    for (auto i : nums)v[i]++;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        if (v[nums[i]] == 0) continue;

        for (int j = 0; j < k; j++) {
            int fnd = nums[i] + j;

            if (v[fnd] == 0) return false;

            v[fnd]--;
        }
    }
    return  true;
    }
};