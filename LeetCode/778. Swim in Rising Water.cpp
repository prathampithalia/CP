#define ppii pair<int, pair<int, int>>
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {

        int n = grid.size();

        priority_queue<ppii, vector<ppii>, greater<ppii>> pq;

        pq.push({ grid[0][0], {0, 0} });
        vector<vector<int>> vis(n, vector<int>(n, 0));
        while (!pq.empty()) {

            int mx = pq.top().first;

            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();

            if (vis[x][y])
                continue;
            vis[x][y] = 1;

            if (x == n - 1 && y == n - 1)
                return mx;
            int dx[] = { -1, 0, +1, 0 };
            int dy[] = { 0, +1, 0, -1 };

            for (int i = 0; i < 4; i++) {

                if (x + dx[i] >= 0 && x + dx[i] < n && y + dy[i] < n &&
                    y + dy[i] >= 0) {
                    if (!vis[x + dx[i]][y + dy[i]]) {
                        int nextmx = max(mx, grid[x + dx[i]][y + dy[i]]);
                        pq.push({ nextmx, {x + dx[i], y + dy[i]} });
                    }
                }
            }
        }

        return 0;
    }
};