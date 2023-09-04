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

void insertatposition (node* &head, node* &tail, int position, int value) {
    if (position == 1) {
        insertatHead(head, 1);
        return;
    }
    node* temp = head;
    int count = 1;
    
    while (count < position-1) {
        temp = temp -> next;
        count++;
    }
    
    if (temp -> next == NULL) {
        insertatTail (tail, value);
        return;
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
    
    node* head = node1;
    node* tail = node1;
    
    cout<< "inserting 10 at head:-" <<endl;
    insertatHead (head, 10);
    printll (head);
    
    cout<<endl;
    
    cout<< "inserting 20 at tail:-" <<endl;
    insertatTail (tail, 20);
    printll (head);
    
    cout<<endl;
    
    cout<< "inserting 25 at position 4:-" <<endl;
    insertatposition (head, tail, 4, 25);
    printll(head);
    
    cout<<endl;
    
    cout<< "head -> " << head -> data <<endl;
    cout<< "tail -> " << tail -> data <<endl;
    
    return 0;
}
