#define ppi pair<int, pair<int, int>>

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dis(n, vector<int>(m, INT_MAX));

        priority_queue<ppi, vector<ppi>, greater<ppi>> pq;

        pq.push({ 0, {0, 0} });
        dis[0][0] = 0;

        while (!pq.empty()) {
            int w = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;

            pq.pop();

            int dx[] = { -1, 0, 1, 0 };
            int dy[] = { 0, +1 , 0 , -1 };
            for (int nx = 0; nx < 4; nx++) {

                int X = dx[nx] + x;
                int Y = dy[nx] + y;

                if (X >= 0 && X < n && Y < m && Y >= 0) {
                    int dif = max(abs(grid[X][Y] - grid[x][y]), w);

                    // int dist = abs(X-x) + abs(Y-y);
                    if (dif < dis[X][Y]) {
                        dis[X][Y] = dif;
                        pq.push({ dif, {X, Y} });
                    }
                }
            }
        }

        return (dis[n - 1][m - 1]);
    }
};