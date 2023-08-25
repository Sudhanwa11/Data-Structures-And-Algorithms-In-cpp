class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //When you XOR two identical numbers, the result is 0. So, by XORing all the elements in the array, the pairs will cancel out and the only remaining value will be the single number
        int result = 0;
        for (int num : nums) {
            result ^= num;  // Using XOR to cancel out pairs of the same number
        }
        return result;
    }
};
