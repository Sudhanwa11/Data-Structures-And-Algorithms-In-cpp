
Node *merge(Node *list1, Node *list2) {
    if (list1 == nullptr) {
        return list2;
    }
    if (list2 == nullptr) {
        return list1;
    }

    Node *dummy = new Node(0);
    Node *mergedList = dummy;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->data <= list2->data) {
            mergedList->next = list1;
            list1 = list1->next;
        } 
		else {
            mergedList->next = list2;
            list2 = list2->next;
        }
        mergedList = mergedList->next;
    }

    if (list1 != nullptr) {
        mergedList->next = list1;
    } 
	else {
        mergedList->next = list2;
    }

    Node *result = dummy->next;
    delete dummy;

    return result;
}

Node *getMid(Node *head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node *mergeSort(Node *head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node *mid = getMid(head);
    Node *secondHalf = mid->next;
    mid->next = nullptr; // Split the list into two halves

    Node *sortedFirstHalf = mergeSort(head);
    Node *sortedSecondHalf = mergeSort(secondHalf);

    return merge(sortedFirstHalf, sortedSecondHalf);
}
