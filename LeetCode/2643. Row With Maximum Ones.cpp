class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& a) {

        int n = a.size();
        int m = a[0].size();
        vector<int> ans(2);
        ans[0] = -1;
        ans[1] = -1;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                cnt += a[i][j];
            }
            if (cnt > ans[1]) {
                ans[1] = cnt;
                ans[0] = i;
            }
        }
        return ans;
    }
};