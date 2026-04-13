class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_len = matrix.size();
        int col_len = matrix[0].size();

        for (int row = 0; row < row_len; row++) {
            // この行にtargetがあり得るか？
            if (matrix[row][0] <= target && target <= matrix[row][col_len - 1]) {
                // この行を線形探索
                for (int col = 0; col < col_len; col++) {
                    if (matrix[row][col] == target) return true;
                }
                return false;
            }
        }
        return false;
    }
};