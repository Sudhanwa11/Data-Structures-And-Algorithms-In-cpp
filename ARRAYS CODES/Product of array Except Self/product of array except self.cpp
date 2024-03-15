class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        // Calculate products of elements to the left of each element and store in answer array
        int leftProduct = 1;
        for (int i = 1; i < n; ++i) {
            leftProduct *= nums[i - 1];
            answer[i] *= leftProduct;
        }

        // Calculate products of elements to the right of each element and update answer array
        int rightProduct = 1;
        for (int i = n - 2; i >= 0; --i) {
            rightProduct *= nums[i + 1];
            answer[i] *= rightProduct;
        }

        return answer;
    }
};
