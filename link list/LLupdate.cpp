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

void insertAtHead(Node*& head, int val) {  // Pass head by reference
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;  // Update head to point to the new node
}

void insertAtTail(Node*& head, int val) {
    Node* new_node = new Node(val);
       Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node*& head, int val, int pos) {
    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while (current_pos != pos - 1) {  // Traverse to the node before the position
        temp = temp->next;
        current_pos++;
    }

    
    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtPosition(Node*& head, int k, int val) {
    Node* temp = head;
    int curr_pos = 0;
    while (curr_pos != k) {
        temp = temp->next;
        curr_pos++;
    }

    temp->val = val;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    
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

    return 0;
}
