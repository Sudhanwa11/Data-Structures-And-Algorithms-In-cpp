class Solution {
public:
    int atMostKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;
        int distinctCount = 0;
        int left = 0;
        int result = 0;
        
        for (int right = 0; right < n; ++right) {
            if (count[nums[right]] == 0) {
                distinctCount++;
            }
            count[nums[right]]++;
            
            while (distinctCount > k) {
                count[nums[left]]--;
                if (count[nums[left]] == 0) {
                    distinctCount--;
                }
                left++;
            }
            
            result += right - left + 1; // Add all subarrays ending at right
            
        }
        
        return result;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostKDistinct(nums, k) - atMostKDistinct(nums, k - 1);
    }
};
