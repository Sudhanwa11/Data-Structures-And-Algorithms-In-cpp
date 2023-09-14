class Solution {
public:
    int romanToInt(string s) {
        //Create a map to store the values of Roman numerals
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        //Initialize variables to store the result and previous character's value
        int result = 0;
        int prevValue = 0;

        //iterate over the string from left to right
        for (int i=0; i<s.length(); i++) {
            //Get the value of the current character
            int currValue = romanValues[s[i]];

            // If the current value is greater than the previous value, subtract the previous value
            if (currValue > prevValue) {
                result += currValue - 2 * prevValue;
            } 
            // Otherwise, add the current value to the result
            else {
                result += currValue;
            }

            // Update the previous value for the next iteration
            prevValue = currValue;
        }
        return result;
    }
};
