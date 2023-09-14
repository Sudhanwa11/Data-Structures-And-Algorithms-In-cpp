class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;
        int prevValue = 0;

        for (int i=0; i<=s.length()-1; i++) {
            int currValue = romanValues[s[i]];
            if (currValue > prevValue) {
                result += currValue - 2 * prevValue;
            } 
            else {
                result += currValue;
            }
            prevValue = currValue;
        }

        return result;
    }
};
