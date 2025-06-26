#include<iostream>
using namespace std; 

class Node {
    public:
        int val;
        Node* next;

        Node(int data) {
            val = data;
            next = NULL;
        }
}; // Added semicolon here

// Function to insert a node at the head of the linked list
void insertAtHead(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;  // Initialize the head of the linked list to NULL

    // Insert nodes at the head and display the list after each insertion
    insertAtHead(head, 2);
    display(head);

    insertAtHead(head, 1);
    display(head);

    return 0;
}
