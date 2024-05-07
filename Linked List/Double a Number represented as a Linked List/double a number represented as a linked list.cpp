/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        // Reverse the linked list
        ListNode* prev = nullptr;
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        
        // Double the values and handle carries
        current = head;
        int carry = 0;
        while (current != nullptr) {
            int doubledValue = current->val * 2 + carry;
            current->val = doubledValue % 10;
            carry = doubledValue / 10;
            if (current->next == nullptr && carry > 0) {
                current->next = new ListNode(carry);
                break;
            }
            current = current->next;
        }
        
        // Reverse the linked list again
        prev = nullptr;
        current = head;
        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        
        return head;
    }
};
