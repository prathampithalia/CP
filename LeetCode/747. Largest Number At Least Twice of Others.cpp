class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int n = nums.size();
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++) {
            v[i].first = nums[i];
            v[i].second = i;
        }

        sort(v.begin(),v.end());
        if (v[n - 1].first >= (v[n - 2].first *2 ))
            return v[n - 1].second;

        return -1;
    }
};