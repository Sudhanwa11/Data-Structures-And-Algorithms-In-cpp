class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Iterate over the grid to calculate the minimum falling path sum
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int best = INT_MAX;
                for (int k = 0; k < n; ++k) {
                    // Avoid choosing elements from adjacent columns
                    if (j != k) {
                        best = min(best, grid[i - 1][k]);
                    }
                }
                grid[i][j] += best;
            }
        }
        
        // Find the minimum falling path sum in the last row of the modified grid
        int minSum = INT_MAX;
        for (int j = 0; j < n; ++j) {
            minSum = min(minSum, grid[n - 1][j]);
        }
        
        return minSum;
    }
};
