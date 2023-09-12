class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Base case: If the head is NULL or if there are fewer than k nodes left, return head.
        if (head == NULL) {
            return NULL;
        }
        
        ListNode* next = NULL;     // Stores the next node in the original list.
        ListNode* current = head;  // Stores the current node being processed.
        ListNode* prev = NULL;     // Stores the previous node after reversal.
        int count = 0;             // Counts the number of nodes processed in this group.

        // Count the number of nodes in the current group.
        ListNode* temp = head;
        int groupSize = 0;
        while (temp != NULL && groupSize < k) {
            temp = temp->next;
            groupSize++;
        }

        // If there are fewer than k nodes left in the last group, no reversal is needed.
        if (groupSize < k) {
            return head;
        }
        
        // Reverse k nodes in the current group.
        while (current != NULL && count < k) {
            next = current -> next;   // Store the next node.
            current -> next = prev;   // Reverse the direction of the current node.
            prev = current;         // Move prev to the current node.
            current = next;         // Move current to the next node.
            count++;                // Increment the count of processed nodes.
        }

        // After reversing the current group, if there are more nodes left in the list,
        // recursively call reverseKGroup on the remaining part.
        if (next != NULL) {
            head -> next = reverseKGroup(next, k);
        }

        // Return the new head of the reversed group.
        return prev;
    }
};
