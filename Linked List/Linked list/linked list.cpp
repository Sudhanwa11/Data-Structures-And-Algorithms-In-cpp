#include <iostream>
using namespace std;
// Node structure to represent each node in the linked list
struct Node {
    int val;
    Node* next;
};

// Function to create a new node with a given value
Node* createNode(int val) {
    Node* newNode = new Node{val, nullptr};
    return newNode;
}

// Function to add a node at the end of the linked list
Node* addNode(Node* head, int val) {
    Node* newNode = createNode(val);

    if (head == nullptr) {
        return newNode;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

// Function to add a node at a specific position in the linked list
Node* addNodeAtPosition(Node* head, int val, int position) {
    Node* newNode = createNode(val);

    if (position <= 0) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr)
        return head;

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;

    while (curr != nullptr) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;  // New head of the reversed list
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Adding nodes to the linked list
    head = addNode(head, 1);
    head = addNode(head, 2);
    head = addNode(head, 3);

    cout << "Original List: ";
    printList(head);

    // Add a node with value 4 at position 2
    head = addNodeAtPosition(head, 4, 2);

    cout << "List after adding 4 at position 2: ";
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    // Clean up the memory (deallocate nodes)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
