bool check(vector<int>& t) {
    int dif = t[1] - t[0];

    for (int i = 2;i < t.size();i++) {
        if ((t[i] - t[i - 1]) != dif) {
            return false;
        }
    }
    return true;

}

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {

        int n = nums.size();

        vector<bool> ans(l.size());
        for (int j = 0; j < l.size(); j++) {
            vector<int> t{};
            for (int i = l[j]; i <= r[j]; i++) {
                t.push_back(nums[i]);
            }
            sort(t.begin(), t.end());
            ans[j] = check(t);
        }

        return ans;

    }
};