class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size(), m = grid[0].size();
        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int time = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0;j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({ {i,j},0 });
                    vis[i][j] = 1;
                }
            }
        }

        int dx[] = { -1,0,1,0 };
        int dy[] = { 0,1,0,-1 };

        while (!q.empty()) {
            int X = q.front().first.first;
            int Y = q.front().first.second;
            int t = q.front().second;
            q.pop();
            for (int x = 0; x < 4; x++) {

                if (X + dx[x] >= 0 && X + dx[x] < n && Y + dy[x] >= 0 && Y + dy[x] < m) {
                    if (grid[X + dx[x]][Y + dy[x]] == 1 && vis[X + dx[x]][Y + dy[x]] == 0) {
                        vis[X + dx[x]][Y + dy[x]] = 1;
                        grid[X + dx[x]][Y + dy[x]] = 2;
                        q.push({ {X + dx[x],Y + dy[x]},t + 1 });
                        time = max(time, t + 1);
                    }
                }

            }
        }
        for (auto i : grid) {
            for (auto j : i) {
                if (j == 1) return -1;
            }
        }

        return time;

    }
};