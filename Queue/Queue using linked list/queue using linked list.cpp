#include <bits/stdc++.h>
using namespace std;

// Declaration of Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Declaration of Queue class
class Queue {
private:
    Node* frontn;  // Rename to avoid conflicts with member functions
    Node* rearn;   // Rename to avoid conflicts with member functions

public:
    Queue() {
        this->frontn = NULL;
        this->rearn = NULL;
    }

    bool isEmpty() {
        return frontn == NULL;
    }

    void enqueue(int data) {
        Node* temp = new Node(data);
        if (isEmpty()) {
            frontn = rearn = temp;
        } else {
            rearn->next = temp;
            rearn = temp;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            return -1;
        }

        int val = frontn->data;
        Node* temp = frontn;
        if (frontn == rearn) {
            frontn = rearn = NULL;
        } else {
            frontn = frontn->next;
        }
        delete temp;
        return val;
    }

    int front() {
        if (isEmpty()) {
            return -1;
        }
        return frontn->data;
    }
};
