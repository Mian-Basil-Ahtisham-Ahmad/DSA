#include<iostream>
using namespace std; 

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val; // Corrected shadowing issue
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtTail(int value) {
        Node* new_node = new Node(value);

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

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void deleteAlternateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node != NULL && curr_node->next != NULL ){
        Node* temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        delete temp;
        curr_node = curr_node->next;
    }
}

void deleteDuplicateNode(Node* &head){
    Node* curr_node = head;
    while(curr_node != NULL && curr_node->next != NULL){
        if(curr_node->val == curr_node->next->val){
            Node* temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            delete temp;
        } else {
            curr_node = curr_node->next;
        }
    }
}

int main() {
    LinkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(2);
    li.insertAtTail(3);
    li.insertAtTail(3);
    li.insertAtTail(3);
    
    cout << "Original list:" << endl;
    li.display(); // To see the elements of the linked list

    deleteDuplicateNode(li.head);
    
    cout << "After deleting duplicates:" << endl;
    li.display(); // To see the elements of the linked list
    return 0;
}
