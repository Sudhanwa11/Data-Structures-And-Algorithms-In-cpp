#include <iostream>
using namespace std;

class stack {
public:
    int *arr;
    int top;
    int size;

    // stack declaration
    stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // to add elements
    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
        } 
        else {
            cout << "Stack overflow" << endl;
        }
    }

    // to delete elements
    void pop() {
        if (top >= 0) {
            top--;
        } 
        else {
            cout << "Stack underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    // function to print all elements in the stack
    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } 
        else {
            cout << "Stack elements:" << endl;
            for (int i = top; i >= 0; i--) {
                cout << "| " << arr[i] << " |" << endl;
            }
            cout<< "_____" <<endl;
        }
    }
};

int main() {
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Top of the stack: " << s.peek() << endl;

    s.printStack();

    s.pop();

    cout << "Top of the stack after pop: " << s.peek() << endl;

    s.printStack();
    return 0;
}

