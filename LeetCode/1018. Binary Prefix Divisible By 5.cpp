class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int num = 0;
        vector<bool> ans;
        for (auto i : nums) {
            num = (num * 2 + i) % 5;
            ans.push_back(num == 0);
        }

        return ans;
    }
};