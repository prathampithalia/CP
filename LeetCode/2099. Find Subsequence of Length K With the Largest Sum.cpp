class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++) {
            v[i].first = nums[i];
            v[i].second = i;
        }

        sort(v.begin(), v.end());
        vector<pair<int, int>> t;
        vector<int> ans;

        while (k--) {
            t.push_back({v[n - k - 1].second, v[n - k - 1].first});
        }

        sort(t.begin(), t.end());
        for (auto i : t) {
            ans.push_back(i.second);
        }
        return ans;
    }
};

// --------------------------------------------

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> nums_idxs(nums.size());
        for (int i = 0; i < nums.size(); i++) nums_idxs[i] = make_pair(nums[i], i);
        sort(nums_idxs.begin(), nums_idxs.end());
        sort(prev(nums_idxs.end(), k), nums_idxs.end(), [](pair<int, int>& left, pair<int, int>& right) {return left.second < right.second;});
        vector<int> ans_arr(k);
        for (int i = nums.size() - k; i < nums.size(); i++)
        {
            ans_arr[i - nums.size() + k] = nums[nums_idxs[i].second];
        }
        return ans_arr;
    }
};