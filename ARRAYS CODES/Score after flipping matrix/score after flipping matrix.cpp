class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        // Number of rows in the matrix
        int num_rows = grid.size();
        // Number of columns in the matrix
        int num_cols = grid[0].size();
      
        // Flip the rows where the first element is 0 to maximize the leading digit
        for (int row = 0; row < num_rows; ++row) {
            if (grid[row][0] == 0) {
                for (int col = 0; col < num_cols; ++col) {
                    grid[row][col] ^= 1; // Xor with 1 will flip 0s to 1s and vice versa
                }
            }
        }
      
        int total_score = 0;
        // Iterate through columns to maximize the score
        for (int col = 0; col < num_cols; ++col) {
            int col_count = 0; // Count of 1s in the current column
          
            // Count the number of 1s in the current column
            for (int row = 0; row < num_rows; ++row) {
                col_count += grid[row][col];
            }
          
            // Determine the value to add to the score for this column
            // We take the larger number between 'col_count' and 'num_rows - col_count'
            // to maximize the column value (since either all 1s or all 0s since we can flip)
            int max_col_value = std::max(col_count, num_rows - col_count);
            // The value of a set bit in the answer is equal to 2^(num_cols - col - 1)
            total_score += max_col_value * (1 << (num_cols - col - 1));
        }
      
        return total_score; // Return the maximized score after performing the operations
    }
};
