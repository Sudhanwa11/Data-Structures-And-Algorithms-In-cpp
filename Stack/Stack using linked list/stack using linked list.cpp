#include <iostream>
using namespace std;

// Node class to represent each element in the stack
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Stack class with push, pop, peek, and print_stack operations
class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    bool is_empty() {
        return top == nullptr;
    }

    void push(int value) {
        Node* new_node = new Node(value);
        new_node->next = top;
        top = new_node;
    }

    int pop() {
        if (is_empty()) {
            cerr << "Error: Stack is empty." << endl;
            return -1; // Assuming -1 as an error code
        }

        int popped_data = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return popped_data;
    }

    int peek() {
        if (is_empty()) {
            cerr << "Error: Stack is empty." << endl;
            return -1; // Assuming -1 as an error code
        }
        return top->data;
    }

    void print_stack() {
        Node* current = top;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Stack after pushes:" << endl;
    stack.print_stack();

    cout << "Popped element: " << stack.pop() << endl;

    cout << "Stack after pop:" << endl;
    stack.print_stack();

    cout << "Peeked element: " << stack.peek() << endl;

    return 0;
}
