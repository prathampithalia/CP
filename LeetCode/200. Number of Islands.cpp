class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(), 0));

        queue<pair<int, int>> q;

        vector<int> row{ +0 , 0 , +1 ,-1 };
        vector<int> col{ +1 , -1 , 0 , 0 };

        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1' && vis[i][j] == 0) {
                    q.push({ i,j });
                    vis[i][j] = 1;
                    while (!q.empty()) {
                        for (int ii = 0; ii < 4; ii++) {
                            int r = q.front().first + row[ii];
                            int c = q.front().second + col[ii];

                            if (r >= 0 && c >= 0 && r < n && c < m) {
                                if (!vis[r][c] && grid[r][c] == '1') {
                                    vis[r][c] = 1;
                                    q.push({ r,c });
                                }
                            }
                        }
                        q.pop();
                    }
                    cnt++;
                }
            }
        }
        return cnt;
    }
};