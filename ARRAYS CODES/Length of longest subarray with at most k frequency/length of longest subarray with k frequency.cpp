class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        // Dictionary to keep track of the count of each number in the current window
        unordered_map<int, int> countMap;
        // Variable to store the maximum length found
        int maxLength = 0;
        // Two pointers defining the current window's boundaries
        for (int left = 0, right = 0; right < nums.size(); ++right) {
            // Increment the count of the rightmost element in the current window
            ++countMap[nums[right]];
            // If the count of the current element exceeds k, shrink the window from the left
            while (countMap[nums[right]] > k) {
                --countMap[nums[left]];
                ++left;  // Move the left pointer to the right
            }
            // Update the maximum length if the current window is larger
            maxLength = max(maxLength, right - left + 1);
        }
        // Return the maximum length of the sub-array
        return maxLength;
    }
};
