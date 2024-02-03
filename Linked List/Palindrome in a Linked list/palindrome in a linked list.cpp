class Solution {
public:
    bool checkPalindrome(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        
        while (start < end) {
            if (arr[start] != arr[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        return checkPalindrome(arr);
    }
};
