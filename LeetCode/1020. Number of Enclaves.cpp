class Solution {
public:
    void helper(vector<vector<int>>& grid, vector<vector<int>>& vis, int i,
        int j) {
        int n = grid.size();
        int m = grid[0].size();
        int dx[] = { -1, 0, +1, 0 };
        int dy[] = { 0, +1, 0, -1 };
        queue<pair<int, int>> q;
        q.push({ i, j });
        vis[i][j] = 1;
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;

            for (int k = 0; k < 4; k++) {
                int nr = x + dx[k];
                int nc = y + dy[k];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    if (grid[nr][nc] == 1 && vis[nr][nc] != 1) {
                        q.push({ nr, nc });
                        vis[nr][nc] = 1;
                    }
                }
            }
            q.pop();
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1) {
                helper(grid, vis, i, 0);
            }
            if (grid[i][m - 1] == 1) {
                helper(grid, vis, i, m - 1);
            }
        }

        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 1) {
                helper(grid, vis, 0, j);
            }
            if (grid[n - 1][j] == 1) {
                helper(grid, vis, n - 1, j);
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] == 0)
                    cnt++;
            }
        }
        return cnt;
    }
};
