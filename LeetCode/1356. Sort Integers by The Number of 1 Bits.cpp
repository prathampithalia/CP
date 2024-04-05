class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> v(arr.size());

        for (int i = 0; i < arr.size(); i++) {
            int k = __builtin_popcount(arr[i]);
            v[i].second = arr[i];
            v[i].first = k;
        }

        sort(v.begin(), v.end());

        vector<int> ans(arr.size());

        for (int i = 0; i < arr.size(); i++) {
            ans[i] = v[i].second;
        }
        return ans;
    }
};