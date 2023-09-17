class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    // Create a temporary vector to hold the rotated elements
    vector<int> temp(nums.size());

    // Iterate through each element in the original vector
    for (int i = 0; i < nums.size(); i++) {
        // Calculate the new index after rotation
        int new_index = (i + k) % nums.size();
        
        // Place the current element at the new index in the temporary vector
        temp[new_index] = nums[i];
    }

    // Update the original vector with the rotated values
    nums = temp;
    }
};
