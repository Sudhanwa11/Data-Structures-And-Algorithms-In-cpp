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

// Custom comparator for priority queue to compare nodes based on their data values
struct CompareNodes {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Create a priority queue to store nodes
        priority_queue<ListNode*, vector<ListNode*>, CompareNodes> pq;

        // Push the head nodes of all k lists into the priority queue
        for (ListNode* head : lists) {
            if (head != nullptr) {
                pq.push(head);
            }
        }

        // Create a dummy node to build the merged list
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;

        // Process until the priority queue is empty
        while (!pq.empty()) {
            // Pop the smallest node from the priority queue
            ListNode* smallest = pq.top();
            pq.pop();

            // Add the smallest node to the result list
            current->next = smallest;
            current = smallest;

            // Push the next node of the popped node into the priority queue
            if (smallest->next != nullptr) {
                pq.push(smallest->next);
            }
        }

        // Return the merged list starting from the next of the dummy node
        return dummy->next;
    }
};
