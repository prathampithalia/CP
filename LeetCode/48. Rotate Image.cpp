class Solution {
public:
    void rotate(vector<vector<int>>& a) {


        // int n = matrix.size();
        // vector < vector < int >> ro(n, vector < int >(n, 0));

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         ro[j][n - i - 1] = matrix[i][j];
        //     }
        // }
        // matrix = ro;

        int n = a.size();
        vector<vector<int>> rows;
        for (int i = 0; i < n; i++) {
            vector<int> t;
            for (int j = 0; j < n; j++) {
                t.push_back(a[i][j]);
            }
            rows.push_back(t);
        }

        int N = n, r = 0;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < n;j++) {
                a[j][i] = rows[r][j];
            }
            r++;
        }

    }
};
