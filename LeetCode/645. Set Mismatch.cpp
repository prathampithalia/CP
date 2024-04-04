class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> v;

        vector<int> ans(2);
        for (auto i : nums) {
            v[i]++;
            if (v[i] == 2)
                ans[0] = i;
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (v.find(i) == v.end()) {
                ans[1] = i;
                break;
            }
        }

        return ans;
    }
};