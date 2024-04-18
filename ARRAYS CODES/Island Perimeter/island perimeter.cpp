class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        // Define directions: up, down, left, right
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == 1) {
                    perimeter += 4; // Each land cell contributes 4 sides to the perimeter

                    // Check surrounding cells
                    for (const auto& dir : directions) {
                        int x = i + dir.first;
                        int y = j + dir.second;

                        // If the surrounding cell is also land, subtract one side
                        if (x >= 0 && x < rows && y >= 0 && y < cols && grid[x][y] == 1) {
                            perimeter--;
                        }
                    }
                }
            }
        }

        return perimeter;
    }
};
