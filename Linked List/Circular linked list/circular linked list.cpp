#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    
    node (int data) {
        this ->  data = data;
        this ->  next = NULL;
    }
    
    ~node () {
        int value = this -> data;
        if (this -> next != NULL) {
            delete next;
            next = NULL;
        }
        cout<< "Memory freed: " << value <<endl;
    }
};

void insertNode (node* &tail, int element, int value) {
    if (tail == NULL) {
        node* n1 = new node(value);
        tail = n1;
        n1 -> next = n1;
    }
    else {
        node* current = tail;
        while (current -> data != element) {
            current = current -> next;
        }
        node* temp = new node(value);
        temp -> next = current -> next;
        current -> next = temp;
    }
}

void deletenode (node* &tail, int value) {
    if (tail = NULL) {
        cout<< "List is already empty" <<endl;
        return;
    }

    else {
        node* prev = tail;
        node* current = prev -> next;
        
        while (current -> data != value) {
            prev = current;
            current = current -> next;
        }
        prev -> next = current -> next;
        if (current == prev) {
            tail = NULL;
        }
        else if (tail == current) {
            tail = prev;
        }
        current -> next = NULL;
        delete current;
    }
}

//to print the linked list 
void printll (node* &tail) {
    node* temp = tail;
    if (tail = NULL) {
        cout<< "list is empty" <<endl;
        return;
    }
    cout<< "Node is:- " <<endl;
    do {
        cout<< tail -> data << " ";
        tail = tail -> next;
    } while (tail != temp);
}

int main() {
    node* tail = NULL;
    
    insertNode (tail, 5, 3);
    
    insertNode (tail, 3, 5);
    
    insertNode (tail, 5, 7);
   
    insertNode (tail, 7, 9);
    
    insertNode (tail, 5, 6);
    
    deletenode (tail, 5);
    
    printll (tail);

    return 0;
}
