class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            // If the list is empty or has only one node, there can be no cycle.
            return false;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) {
            slow = slow->next;          // Move slow pointer by one step
            fast = fast->next->next;    // Move fast pointer by two steps

            if (slow == fast) {
                // If there is a cycle, slow and fast pointers will meet.
                return true;
            }
        }

        // If we reach the end of the list without finding a cycle, return false.
        return false;
    }
};
