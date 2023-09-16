Node* sortList(Node *head){
    // Count the occurrences of 0, 1, and 2
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    Node* temp = head;

    // Count occurrences
    while (temp != NULL) {
        if (temp -> data == 0) {
            zerocount++;
        }
        else if (temp -> data == 1) {
            onecount++;
        }
        else {
            twocount++;
        }
        temp = temp -> next;
    }

    // Reset temp to head for rearranging nodes
    temp = head;

    // Rearrange nodes based on counts
    while (temp != NULL) {
        if (zerocount != 0) {
            temp -> data = 0;
            zerocount--;
        }
        else if (onecount != 0) {
            temp -> data = 1;
            onecount--;
        }
        else {
            temp -> data = 2;
            twocount--;
        }
        temp = temp -> next;
    }

    // Return the head of the sorted list
    return head;
}
