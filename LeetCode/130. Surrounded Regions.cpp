class Solution {
public:

    void helper(vector<vector<char>>& board, vector<vector<int>>& vis, int i, int j) {
        int n = board.size();
        int m = board[0].size();
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
                    if (board[nr][nc] == 'O' && vis[nr][nc] != 1) {
                        q.push({ nr, nc });
                        vis[nr][nc] = 1;
                    }
                }
            }
            q.pop();
        }
    }
    void solve(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O') {
                helper(board, vis, i, 0);
            }
            if (board[i][m - 1] == 'O') {
                helper(board, vis, i, m - 1);
            }
        }

        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O') {
                helper(board, vis, 0, j);
            }
            if (board[n - 1][j] == 'O') {
                helper(board, vis, n - 1, j);
            }
        }

        for (int i = 0;i < n; i++) {
            for (int j = 0;j < m; j++) {
                if (board[i][j] == 'O' && vis[i][j] == 0) board[i][j] = 'X';
            }
        }
    }
};