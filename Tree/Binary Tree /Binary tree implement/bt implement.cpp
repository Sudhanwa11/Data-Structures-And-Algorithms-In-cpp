#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
public:
    Node* root;

    // Constructor
    BinaryTree() {
        root = NULL;
    }

    // Function to insert a node in the binary tree
    Node* insertNode(Node* node, int val) {
        if (node == NULL) {
            return new Node(val);
        }
        if (val < node->data) {
            node->left = insertNode(node->left, val);
        } else {
            node->right = insertNode(node->right, val);
        }
        return node;
    }

    // Wrapper for inserting a node
    void insert(int val) {
        root = insertNode(root, val);
    }

    // Function to find the minimum value node in a subtree
    Node* findMin(Node* node) {
        while (node && node->left != NULL) {
            node = node->left;
        }
        return node;
    }

    // Function to delete a node in the binary tree
    Node* deleteNode(Node* node, int val) {
        if (node == NULL) return node;

        if (val < node->data) {
            node->left = deleteNode(node->left, val);
        } else if (val > node->data) {
            node->right = deleteNode(node->right, val);
        } else {
            // Node with one child or no child
            if (node->left == NULL) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == NULL) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            // Node with two children: Get the inorder successor
            Node* temp = findMin(node->right);

            // Copy the inorder successor's content to this node
            node->data = temp->data;

            // Delete the inorder successor
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    // Wrapper for deleting a node
    void deleteValue(int val) {
        root = deleteNode(root, val);
    }

    // Function to print the binary tree in in-order traversal
    void printInOrder(Node* node) {
        if (node == NULL) return;

        printInOrder(node->left);
        cout << node->data << " ";
        printInOrder(node->right);
    }

    // Wrapper for in-order traversal
    void print() {
        printInOrder(root);
        cout << endl;
    }
};

int main() {
    BinaryTree tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(35);
    tree.insert(5);
    tree.insert(15);

    cout << "In-Order Traversal before deletion: ";
    tree.print();

    tree.deleteValue(20);

    cout << "In-Order Traversal after deletion: ";
    tree.print();

    return 0;
}
