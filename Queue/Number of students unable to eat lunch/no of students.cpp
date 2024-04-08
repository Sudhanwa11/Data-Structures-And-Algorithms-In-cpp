class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circularSandwiches = 0, squareSandwiches = 0;
        
        // Count the number of students who prefer circular and square sandwiches
        for (int student : students) {
            if (student == 0)
                circularSandwiches++;
            else
                squareSandwiches++;
        }
        
        // Iterate through sandwiches until all are eaten or no more students can eat
        for (int sandwich : sandwiches) {
            if (sandwich == 0) {
                if (circularSandwiches == 0)
                    break; // No more circular sandwiches to eat
                circularSandwiches--;
            } else {
                if (squareSandwiches == 0)
                    break; // No more square sandwiches to eat
                squareSandwiches--;
            }
        }
        
        // Return the count of remaining sandwiches that couldn't be eaten
        return circularSandwiches + squareSandwiches;
    }
};
