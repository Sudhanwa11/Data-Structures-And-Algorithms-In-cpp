#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

node* reverse(node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    node* newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

void insertatHead(node* &head, int value) {
    node* temp = new node(value);
    temp->next = head;
    head = temp;
}

void insertatTail(node* &tail, int value) {
    node* temp = new node(value);
    tail->next = temp;
    tail = temp;
}

void insertatposition(node* &head, node* &tail, int position, int value) {
    if (position == 1) {
        insertatHead(head, value);
        return;
    }
    node* temp = head;
    int count = 1;

    while (count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL) {
        insertatTail(tail, value);
        return;
    }

    node* insertnode = new node(value);
    insertnode->next = temp->next;
    temp->next = insertnode;
}

void printll(node* &head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* n1 = new node(5);
    node* head = n1;
    node* tail = n1;

    insertatHead(head, 3);
    insertatposition(head, tail, 2, 7);
    insertatposition(head, tail, 3, 9);
    insertatTail(tail, 11);

    cout << "Original Linked List:" << endl;
    printll(head);
    cout << endl;

    // Reverse the linked list
    head = reverse(head);

    cout << "Reversed Linked List:" << endl;
    printll(head);

    return 0;
}
