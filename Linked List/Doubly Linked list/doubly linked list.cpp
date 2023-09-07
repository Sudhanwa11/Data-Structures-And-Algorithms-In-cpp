
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
    
    //destructor
    ~node () {
        int value = this -> data;
        if (next != NULL) {
            delete next;
            next = NULL;
        }
        cout<< "Memory freed" <<endl;
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
void printll (node* &head, node* &tail) {
    node* temp = head;
    cout<< "Node is:- " <<endl;
    while (temp != NULL) {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
    cout<< "HEAD:- " << head -> data <<endl;
    cout<< "TAIL:- " << tail -> data <<endl;
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

//to delete a node in linked list
void deletion (node* &head, node* &tail, int position) {
    if (position == 1) {
        node* temp = head;
        temp -> next -> previous = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

        // Check if the list is now empty
        if (head == NULL) {
            tail = NULL;
        }
    }
    else {
        node* current = head;
        node* previous = NULL;
        int count = 1;
        while (count < position) {
            previous = current;
            current = current->next;
            count++;
        }

        current -> previous = NULL;
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;

        // Check if the last node was deleted
        if (previous -> next == NULL) {
            tail = previous;
        }
    }
}


int main() {
    node* n1 = new node(15);
    node* head = n1;
    node* tail = n1;
    
    insertatHead (head, 10);
    insertatTail (tail, 25);
    insertatanyposition (head, tail, 3, 20);
    insertatanyposition (head, tail, 5, 30);
    
    deletion (head, tail, 5);
    
    printll (head, tail);
    
    cout << "Length of node is: " << getlen(head) <<endl;
    return 0;
}
