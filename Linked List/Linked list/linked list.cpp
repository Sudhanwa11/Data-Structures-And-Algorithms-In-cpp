#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    
    node (int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertatHead (node* &head, int value) {
    node* temp = new node(value);
    temp -> next = head;
    head = temp;
}

void insertatTail (node* &tail, int value) {
    node* temp = new node(value);
    tail -> next = temp;
    tail = temp;
}

void insertatposition (node* head, int position, int value) {
    if (position == 1) {
        insertatHead (head, 1);
        return;
    }
    node* temp = head;
    int count = 1;
    while (count < position-1) {
        temp = temp -> next;
        count++;
    }
    node* insertnode = new node(value);
    insertnode -> next = temp -> next;
    temp -> next = insertnode; 
}

void printll (node* &head) {
    node* temp = head;
    while (temp != NULL) {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    node* node1 = new node(15);
    cout<< node1 -> data <<endl;
    cout<< node1 -> next <<endl;
    
    node* head = node1;
    node* tail = node1;
    
    cout<< "inserting 10 at head" <<endl;
    insertatHead (head, 10);
    printll (head);
    
    cout<< "inserting 20 at tail" <<endl;
    insertatTail (tail, 20);
    printll (head);
    
    insertatposition (head, 2, 12);
    printll (head);
    
    return 0;
}
