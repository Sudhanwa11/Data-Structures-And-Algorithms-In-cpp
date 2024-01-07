#include <iostream>

using namespace std;

// Node class to represent each element in the queue
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Queue class with enqueue, dequeue, is_empty, front, and print_queue operations
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    bool is_empty() {
        return front == nullptr;
    }

    void enqueue(int value) {
        Node* new_node = new Node(value);
        if (is_empty()) {
            front = rear = new_node;
        } else {
            rear->next = new_node;
            rear = new_node;
        }
    }

    int dequeue() {
        if (is_empty()) {
            cerr << "Error: Queue is empty." << endl;
            return -1; // Assuming -1 as an error code
        }

        int dequeued_data = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;

        if (front == nullptr) {
            rear = nullptr; // If the queue is now empty, update the rear pointer
        }

        return dequeued_data;
    }

    int front_value() {
        if (is_empty()) {
            cerr << "Error: Queue is empty." << endl;
            return -1; // Assuming -1 as an error code
        }
        return front->data;
    }

    void print_queue() {
        Node* current = front;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Queue after enqueues:" << endl;
    queue.print_queue();

    cout << "Dequeued element: " << queue.dequeue() << endl;

    cout << "Queue after dequeue:" << endl;
    queue.print_queue();

    cout << "Front element: " << queue.front_value() << endl;

    return 0;
}
