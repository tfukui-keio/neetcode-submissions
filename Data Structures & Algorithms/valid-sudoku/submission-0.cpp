class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int len_row = 9;
        int len_col = 9;

        bool rows[len_row][len_col] = {};
        bool cols[len_row][len_col] = {};
        bool blocks[len_row][len_col] = {};

        for (int i=0; i<len_row; ++i) {
            for (int j=0; j < len_col; ++j) {
                // ドットの場合は無視して進む
                if (board[i][j] == '.') continue;

                int index = board[i][j] - '1';
                int block_number = (i/3)*3+(j/3);
                bool is_invalid_sudoku = (rows[i][index] || cols[j][index] || blocks[block_number][index]);

                if(is_invalid_sudoku) {
                    return false;
                }

                rows[i][index] = cols[j][index] = blocks[block_number][index] = true;
            }
        }
        return true;
    }
};
