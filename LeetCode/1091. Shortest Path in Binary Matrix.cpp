#define ppi pair<int,pair<int,int>>
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<vector<int>> dis(n, vector<int>(n, INT_MAX));

        priority_queue< ppi, vector<ppi>, greater<ppi>>pq;

        if (grid[n - 1][n - 1] == 1 || grid[0][0] == 1) return -1;

        pq.push({ 1 , {0,0} });
        dis[0][0] = 1;

        while (!pq.empty()) {
            int w = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;

            if (x == n - 1 && y == n - 1) return w;
            pq.pop();

            for (int nx = -1; nx <= 1; nx++) {
                for (int ny = -1; ny <= 1; ny++) {

                    int X = nx + x;
                    int Y = ny + y;

                    if (X >= 0 && X < n && Y < n && Y >= 0) {
                        if (grid[X][Y] == 0) {

                            // int dist = abs(X-x) + abs(Y-y);
                            if (1 + w < dis[X][Y]) {
                                dis[X][Y] = 1 + w;
                                pq.push({ 1 + w , {X ,Y} });
                            }
                        }
                    }

                }
            }
        }
        return (dis[n - 1][n - 1] != INT_MAX ? dis[n - 1][n - 1] : -1);

    }
};