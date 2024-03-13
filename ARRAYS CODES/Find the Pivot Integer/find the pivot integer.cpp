class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) {
            return 1;
        }
        int totalSum = (n * (n + 1)) / 2;
        int sumBefore = 0;

        for (int x = 1; x <= n; x++) {
            // Check if removing x from sumBefore makes the remaining sum equal to sumAfter
            if (2 * sumBefore + x == totalSum) {
                return x;
            }

            sumBefore += x;
        }

        // If no pivot integer is found
        return -1;
    }
};
