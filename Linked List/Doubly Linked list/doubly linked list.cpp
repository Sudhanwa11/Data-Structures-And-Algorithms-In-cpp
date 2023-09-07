
#include <iostream>
using namespace std;

//DOUBLY LINKED LIST
class node {
    public:
    int data;
    node* previous;
    node* next;
    
    //constructor
    node (int data) {
        this -> data = data;
        this -> previous = NULL;
        this -> next = NULL;
    }
};

//to insert a value at head of linked list
void insertatHead (node* &head, int value) {
    if (head == NULL) {
        node* temp = new node(value);
        head = temp;
    }
    else {
        node* temp = new node(value);
        temp -> next = head;
        head -> previous = temp;
        head = temp;
    }
}

//to insert a value at tail of linked list
void insertatTail (node* &tail, int value) {
    if (tail == NULL) {
        node* temp = new node(value);
        tail = temp;
    }
    else {
        node* temp = new node(value);
        tail -> next = temp;
        temp -> previous = tail;
        tail = temp;
    }
}

//to insert a value at head of linked list
void insertatanyposition (node* &head, node* &tail, int position, int value) {
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
    temp -> next -> previous = insertnode;
    temp -> next = insertnode;
    insertnode -> previous = temp;
}

//to print the linked list 
void printll (node* &head) {
    node* temp = head;
    while (temp != NULL) {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//to get length of linked list
int getlen (node* &head) {
    int len = 0;
    node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp -> next;
    }
    return len;
}

int main() {
    node* n1 = new node(15);
    node* head = n1;
    node* tail = n1;
    
    insertatHead (head, 10);
    insertatTail (tail, 25);
    insertatanyposition (head, tail, 3, 20);
    printll (head);
    
    cout << getlen(head) <<endl;
    return 0;
}
