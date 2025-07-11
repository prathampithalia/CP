class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size(), n = matrix[0].size();
        int low = 0, high = m * n - 1;
        int mid = (low + high) >> 1;
        while (low <= high) {

            int row = mid / n, col = mid % n;
            if (matrix[row][col] == target) {
                return true;
            }
            else if (matrix[row][col] > target) {
                high = mid - 1;
            }
            else
                low = mid + 1;
            mid = (low + high) >> 1;
        }

        return false;
    }
};