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
};

// Function to insert a node at the head of the linked list
void insertAtHead(Node*& head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

// Function to insert a node at the tail of the linked list
void insertAtTail(Node*& head, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

// Function to insert a node at a specified position in the linked list
void insertAtPosition(Node*& head, int val, int pos) {
    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while (temp != NULL && current_pos < pos - 1) {
        temp = temp->next;
        current_pos++;
    }
    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        delete new_node;
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

// Function to update the value of a node at a specified position in the linked list
void updateAtPosition(Node*& head, int k, int val) {
    Node* temp = head;
    int curr_pos = 0;
    while (temp != NULL && curr_pos != k) {
        temp = temp->next;
        curr_pos++;
    }
    if (temp != NULL) {
        temp->val = val; // Update the value
    } else {
        cout << "Position out of bounds" << endl;
    }
}

// Function to delete the node at the head of the linked list
void deleteAtHead(Node*& head) {
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Function to delete the node at the tail of the linked list
void deleteAtTail(Node*& head) {
    if (head == NULL) return;
    if (head->next == NULL) { // Only one node in the list
        delete head;
        head = NULL;
        return;
    }
    Node* second_last = head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    Node* temp = second_last->next;
    second_last->next = NULL;
    delete temp;
}

// Function to delete a node at a specified position in the linked list
void deleteAtPosition(Node*& head, int pos) {
    if (head == NULL) return;
    if (pos == 0) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int curr_pos = 0;
    while (temp != NULL && curr_pos < pos - 1) {
        temp = temp->next;
        curr_pos++;
    }
    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }
    Node* node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    delete node_to_delete;
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

    insertAtTail(head, 3);
    display(head);

    insertAtPosition(head, 4, 1);
    display(head);

    updateAtPosition(head, 2, 5);
    display(head);

    // deleteAtHead(head);
    // display(head);

    // deleteAtTail(head);
    // display(head);

    deleteAtPosition(head, 1);
    display(head);

    return 0;
}
