class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));


        queue<pair<pair<int, int>, int>> q;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m; j++) {
                if (mat[i][j] == 0) {
                    q.push({ {i,j},0 });
                }
            }
        }
        int dx[] = { -1,0,+1,0 };
        int dy[] = { 0,+1,0,-1 };

        while (!q.empty()) {

            int x = q.front().first.first;
            int y = q.front().first.second;
            int dis = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nr = x + dx[i];
                int nc = y + dy[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m && mat[nr][nc] == 1) {

                    if (!vis[nr][nc]) {
                        vis[nr][nc] = 1;
                        q.push({ {nr , nc} , dis + 1 });
                        ans[nr][nc] = dis + 1;
                    }
                }
            }

        }
        return ans;

    }
};