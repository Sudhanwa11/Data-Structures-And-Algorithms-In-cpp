#include <bits/stdc++.h>
/****************************************************************
    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    if (head == NULL || head -> next == NULL) {
        return head;
    }
    
    LinkedListNode<int>* previous = NULL;
    LinkedListNode<int>* current = head;
    LinkedListNode<int>* forward = NULL;

    while (current != NULL) {
        forward = current -> next;
        current -> next = previous;
        previous = current;
        current = forward;
    }
    return previous;
}
