class Solution {
public:
    bool isValid(vector<vector<char>>& board, int i, int j, char c) {
        int n = 9;
        for (int x = 0; x < n; x++) {

            // ROW
            if (board[i][x] == c)
                return false;
            // COLUMN
            if (board[x][j] == c)
                return false;

            // i,j Box 3x3

            if (board[(3 * (i / 3) + x / 3)][3 * (j / 3) + x % 3] == c)
                return false;
        }

        return true;
    }
    bool solve(vector<vector<char>>& board) {
        int n = 9;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.') {

                    for (char c = '1'; c <= '9'; c++) {

                        if (isValid(board, i, j, c)) {
                            board[i][j] = c;

                            if (solve(board)) {
                                return true;
                            }

                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) { solve(board); }
};