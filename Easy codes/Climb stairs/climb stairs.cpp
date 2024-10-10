class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }

        int onestep = 2;
        int twostep = 1;
        int allway = 0;

        for (int i=3; i<=n; i++) {
            allway = onestep + twostep;
            twostep = onestep;
            onestep = allway;
        }
        
        return allway;
    }
};
