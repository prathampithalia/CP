class Solution {
public:
    int maxIndex(vector<vector<int>> v, int col) {

        int mx = INT_MIN, ind = -1;
        for (int i = 0; i < v.size(); i++) {
            if (v[i][col] > mx) {
                mx = v[i][col];
                ind = i;
            }
        }
        return ind;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int l = 0, r = mat[0].size();
        int mid = (l + r) >> 1;
        int n = mat.size(), m = mat[0].size();
        while (l <= r) {

            // we are finding the row of the maximum column element
            // by this we are reducing the top and bottom maximum finding . as max it will satisfy  this 
            // more chance that the max element of col can be peak as two criteria checked , left and right remains
            int row = maxIndex(mat, mid);
            int left = ((mid - 1) >= 0) ? mat[row][mid - 1] : -1;
            int right = ((mid + 1) < m) ? mat[row][mid + 1] : -1;

            if (mat[row][mid] > left && mat[row][mid] > right)
                return { row, mid };

            if (mat[row][mid] < left)
                r = mid - 1;
            else
                l = mid + 1;

            mid = (l + r) >> 1;
        }
        return { -1, -1 };
    }
};