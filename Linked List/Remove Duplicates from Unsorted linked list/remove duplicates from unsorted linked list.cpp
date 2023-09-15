Node* removeDuplicates(Node* head) {
    // Check if the linked list is empty
    if (head == nullptr) {
        return nullptr;
    }

    // HashSet to store unique values we've encountered
    unordered_set<int> seen_values;

    // Pointers to traverse the linked list
    Node* curr = head;
    Node* prev = nullptr;

    // Traverse the linked list
    while (curr != nullptr) {
        int data = curr -> data;  // Get the data of the current node

        // Check if the data is already in the set of seen values
        if (seen_values.find(data) != seen_values.end()) {
            // Data is a duplicate, remove the current node
            prev -> next = curr -> next;  // Update previous node's 'next' pointer
            delete curr;                  // Delete the duplicate node
            curr = prev -> next;          // Move to the next node
        } 
        else {
            // Data is not a duplicate, update the set and pointers
            seen_values.insert(data);  // Add data to the set of seen values
            prev = curr;               // Update the previous node to the current node
            curr = curr -> next;         // Move to the next node
        }
    }
    // Return the head of the linked list after removing duplicates
    return head;
}
