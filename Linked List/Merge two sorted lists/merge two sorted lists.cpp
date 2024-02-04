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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }

        // Introduce a dummy node to simplify the insertion logic
        ListNode* dummy = new ListNode(-1);
        ListNode* mergedList = dummy;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                mergedList->next = list1;
                list1 = list1->next;
            } 
            else {
                mergedList->next = list2;
                list2 = list2->next;
            }
            mergedList = mergedList->next;
        }

        // Append the remaining elements from list1 or list2
        if (list1 != NULL) {
            mergedList->next = list1;
        } 
        else {
            mergedList->next = list2;
        }

        // Save the result, skip the dummy node, and free it
        ListNode* result = dummy->next;
        delete dummy;

        return result;
    }
};
