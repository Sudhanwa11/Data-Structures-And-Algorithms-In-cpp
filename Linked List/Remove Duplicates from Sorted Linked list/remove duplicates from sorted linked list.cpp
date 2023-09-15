Node* removeDuplicates(Node* head) {
    // Check if the linked list is empty or has only one node
    if (head == NULL || head -> next == NULL) {
        return head;
    }

    // Initialize a pointer to traverse the linked list
    Node* curr = head;

    // Traverse the linked list
    while (curr != NULL && curr -> next != NULL) {

        // Check if the current node's data is equal to the next node's data
        if (curr -> data == curr -> next -> data) {

            // If duplicates are found, store a pointer to the next node
            Node* nodeToDelete = curr -> next;

            // Update the current node's 'next' pointer to skip the duplicate node
            curr -> next = curr -> next -> next;

            // Delete the duplicate node (free its memory)
            delete nodeToDelete;
        } 
        else {
            // Move to the next node if no duplicate is found
            curr = curr -> next;
        }
    }
    // Return the head of the linked list after removing duplicates
    return head;
}
