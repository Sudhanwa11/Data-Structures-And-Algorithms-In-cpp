class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1);  // Initialize candies for all children as 1

        // First pass: Ensure that children with higher ratings get more candies than left neighbors
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // Second pass: Ensure that children with higher ratings get more candies than right neighbors
        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        // Calculate the total minimum candies needed
        int minCandies = 0;
        for (int i = 0; i < n; ++i) {
            minCandies += candies[i];
        }

        return minCandies;
    }
};
