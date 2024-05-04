class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int n = grid.size();

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n;j++) {
                bool same = true;
                for (int k = 0; k < n;k++) {

                    if (grid[k][i] != grid[j][k]) {
                        same = false;
                        break;
                    }

                }
                if (same) cnt++;
            }
        }

        return cnt;

    }
};