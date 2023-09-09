class Solution {
private:
    int getLength (ListNode* head) {
        int length = 0;
        while (head != NULL) {
            length++;
            head = head -> next;
        }
        return length;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int length = getLength (head);
        int ans = (length/2);
        ListNode* temp = head;
        int count = 0;

        while (count < ans) {
            temp = temp -> next;
            count++;
        }
        return temp;
    }
};
