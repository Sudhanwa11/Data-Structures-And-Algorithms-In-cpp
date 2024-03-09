class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1; // Initialize carry to 1 for adding 1 to the number

        for (int i = digits.size() - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            digits[i] = sum % 10; // Update the current digit
            carry = sum / 10; // Update carry for the next iteration

            // If there is no carry, we can stop the loop
            if (carry == 0) {
                break;
            }
        }

        // If there is still a carry after the loop, insert a new digit at the beginning
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};
