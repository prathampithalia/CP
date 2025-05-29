class Solution {
public:

    void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, vector<pair<int, int>>& v, int baseRow, int baseCol) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;
        q.push({ baseRow , baseCol });

        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;

            q.pop();

            int dx[] = { -1,0,1,0 };
            int dy[] = { 0,1,0,-1 };

            for (int i = 0; i < 4; i++) {
                int nx = dx[i] + x;
                int ny = dy[i] + y;
                if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                    if (!vis[nx][ny] && grid[nx][ny] == 1) {
                        v.push_back({ nx - baseRow , ny - baseCol });
                        vis[nx][ny] = 1;
                        q.push({ nx ,ny });
                    }
                }
            }
        }
    }

    int countDistinctIslands(vector<vector<int>>& grid) {

        set<vector<pair<int, int>>> s;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0;i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j]) {

                    vis[i][j] = 1;
                    vector<pair<int, int>> v;
                    v.push_back({ 0,0 });
                    bfs(grid, vis, v, i, j);

                    s.insert(v);
                }
            }
        }
        return s.size();
    }
};
