class Solution {
public:
    string removeKdigits(string num, int k) {
        string result = "";
        
        // Iterate through each digit in the number
        for (char digit : num) {
            // While there are digits in the result, k > 0, and the current digit is smaller than the last digit in the result
            while (!result.empty() && k > 0 && digit < result.back()) {
                result.pop_back(); // Remove the last digit from the result
                k--;              // Decrement k since a digit is removed
            }
            
            // Append the current digit to the result
            result.push_back(digit);
        }
        
        // Remove remaining digits if k > 0
        while (k > 0 && !result.empty()) {
            result.pop_back(); // Remove digits from the result
            k--;              // Decrement k
        }
        
        // Remove leading zeros from the result
        int leadingZeros = 0;
        while (leadingZeros < result.length() && result[leadingZeros] == '0') {
            leadingZeros++;
        }
        result = result.substr(leadingZeros);
        
        // If the result is empty, return "0"
        if (result.empty()) {
            return "0";
        }
        
        return result;
    }
};
