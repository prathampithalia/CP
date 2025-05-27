class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
        int color) {

        queue<pair<int, int>> q;
        q.push({ sr, sc });
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vis(n, (vector<int>(m, 0)));
        vis[sr][sc] = 1;
        int initialColor = image[sr][sc];
        image[sr][sc] = color;
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;

            int dx[] = { -1, 0, +1, 0 };
            int dy[] = { 0, +1, 0, -1 };
            for (int i = 0; i < 4; i++) {
                int nr = dx[i] + x;
                int nc = dy[i] + y;
                if (dx[i] + x < n && dx[i] + x >= 0 && dy[i] + y >= 0 &&
                    dy[i] + y < m) {
                    if (!vis[nr][nc] && image[nr][nc] == initialColor) {
                        image[nr][nc] = color;
                        q.push({ nr, nc });
                        vis[nr][nc] = 1;
                    }
                }
            }
            q.pop();
        }
        return image;
    }
};