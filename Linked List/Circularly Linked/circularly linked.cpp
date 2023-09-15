bool isCircular(Node* head) {
    if (head == NULL) {
        return true;
    }

    if (head -> next == NULL ) {
        return false;
    }

    Node* temp = head -> next;
    while (temp != NULL) {
        if (temp -> data == head -> data) {
            return true;
        }
        else if (temp -> data == NULL) return false;
        temp -> data = NULL;
        temp = temp -> next;
    }
    return false;
}
