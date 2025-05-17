class Solution {
public:
    bool help(vector<vector<char>>& board, string word, int r, int c, int len) {
        if (len == word.size())
            return true;
        int n = board.size();
        int m = board[0].size();

        if (r < 0 || c < 0 || r >= n || c >= m || board[r][c] != word[len])
            return false;
        char temp = board[r][c];

        board[r][c] = '#';

        int dx[] = { -1, 0, 1, 0 };
        int dy[] = { 0, 1, 0, -1 };

        for (int i = 0; i < 4; i++) {
            int rn = r + dx[i];
            int cn = c + dy[i];

            if (help(board, word, rn, cn, len + 1))
                return true;
        }

        board[r][c] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {

        bool ans = false;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                int len = 0;
                if (board[i][j] == word[0])
                    ans = help(board, word, i, j, len);
                if (ans)
                    return ans;
            }
        }

        return false;
    }
};