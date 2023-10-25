#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this -> data = data;
        this -> next = nullptr;
    }

    ~node() {
        cout << "MEMORY FREED OF VALUE: " << data << endl;
        // Note: We don't delete 'next' here to avoid deleting the entire list.
    }
};

void insertAthead(node* &head, int value) {
    node* temp = new node(value);
    temp -> next = head;
    head = temp;
}

void insertAttail(node* &tail, int value) {
    node* temp = new node(value);
    tail -> next = temp;
    tail = temp;
}

void printL(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtmiddle(node* &head, node* &tail, int value, int position) {
    if (position <= 0) {
        // Insert at the head
        node* newnode = new node(value);
        newnode -> next = head;
        head = newnode;
    } 
    else {
        // Traverse to the position or the end of the list
        node* temp = head;
        int count = 1;
        while (count < position && temp != nullptr) {
            temp = temp -> next;
            count++;
        }

        if (temp == nullptr || temp -> next == nullptr) {
            // Position exceeds the length of the list, insert at the end
            insertAttail(tail, value);
        } 
        else {
            // Insert at the specified position
            node* newnode = new node(value);
            newnode -> next = temp -> next;
            temp -> next = newnode;
        }
    }
}

void deletion(node* &head, int position) {
    if (head == nullptr)
        return;

    if (position == 1) {
        node* temp = head;
        head = head -> next;
        delete temp;
    } 
    else {
        node* curr = head;
        node* prev = nullptr;
        int count = 1;
        while (count < position && curr != nullptr) {
            prev = curr;
            curr = curr -> next;
            count++;
        }
        if (curr != nullptr) {
            prev -> next = curr -> next;
            delete curr;
        }
    }
}

node* reverselist(node* head) {
    node* prev = nullptr;
    node* curr = head;

    while (curr != nullptr) {
        node* temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

int main() {
    node* newnode = new node(10);

    node* head = newnode;
    node* tail = newnode;

    insertAthead(head, 5);
    insertAttail(tail, 15);
    insertAtmiddle(head, tail, 20, 3);

    cout << "Original List: ";
    printL(head);

    head = reverselist(head);

    cout << "Reversed List: ";
    printL(head);

    deletion(head, 2);
    cout << "List after deletion at position 2: ";
    printL(head);

    // Free memory by deleting the linked list
    delete head;
    return 0;
}
