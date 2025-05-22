class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        for (int i = 0; i < v.size(); i++) {
            int ind =
                lower_bound(v[i].begin(), v[i].end(), target) - v[i].begin();
            if (ind < v[i].size() && v[i][ind] == target) return true;
        }

        return false;
    }
};