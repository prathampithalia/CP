class Solution {
public:
    void solve(int ind, int tar, vector<int>& a, vector<vector<int>>& ans, vector<int>& t, int tot) {

        if (ind == a.size()) {
            if (tot == tar)
                ans.push_back(t);
            return;
        }

        if (tot + a[ind] <= tar) {
            t.push_back(a[ind]);
            solve(ind, tar, a, ans, t, tot + a[ind]);
            t.pop_back();
        }

        solve(ind + 1, tar, a, ans, t, tot);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<vector<int>> ans;

        vector<int> t;
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        solve(0, target, a, ans, t, 0);

        return ans;
    }
};