class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int  n = grid.size();
        int m = grid[0].size();

        int dx[] = { 0,1,0,-1,0 };
        int dy[] = { -1,0,1,0,0 };

        int ans = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                if (grid[r][c]) {
                    for (int i = 0; i < 4;i++) {
                        if (r + dx[i] < n && r + dx[i] >= 0 && c + dy[i] < m && c + dy[i] >= 0) {
                            if (grid[r + dx[i]][c + dy[i]] == 0)ans++;
                        }
                        if (r + dx[i] == n)ans++;
                        if (r + dx[i] == -1)ans++;
                        if (c + dy[i] == m)ans++;
                        if (c + dy[i] == -1)ans++;
                    }

                }
            }
        }

        return ans;
    }
};