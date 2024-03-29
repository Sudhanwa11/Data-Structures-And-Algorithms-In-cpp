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

node* floyddetect (node* &head) {
    if (head == NULL) {
        return NULL;
    }
    node* slow = head;
    node* fast = head;
    
    while (slow != NULL && fast != NULL) {
        fast = fast -> next;
        if (fast -> next != NULL) {
            fast = fast -> next;
        }
        
        slow = slow -> next;
        if (slow == fast) {
            return slow;
        }
    }
    return NULL;
}

node* getstartingnode (node* &head) {
    if (head == NULL) {
        return NULL;
    }
    
    node* intersection = floyddetect(head);
    node* slow = head;
    while (slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void removeloop (node* &head) {
    if (head == NULL) {
        return;
    }
    node* start = getstartingnode (head);
    node* temp = start;
    while (temp -> next != start) {
        temp = temp -> next;
    }
    temp -> next = NULL;
}

