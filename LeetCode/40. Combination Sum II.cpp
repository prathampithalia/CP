class Solution {
public:
    void helper(int ind, vector<int> arr, vector<vector<int>>& ans,
        vector<int> t, int target) {
        if (ind == arr.size()) {
            if (target == 0) {
                ans.push_back(t);
            }
            return;
        }

        if (arr[ind] <= target) {
            t.push_back(arr[ind]);
            helper(ind + 1, arr, ans, t, target - arr[ind]);
            t.pop_back();
        }
        int next = ind + 1;
        while (next < arr.size() && arr[next] == arr[ind]) {
            next++;
        }
        helper(next, arr, ans, t, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {

        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        vector<int> t;

        helper(0, arr, ans, t, target);
        return ans;
    }
};