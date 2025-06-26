#include<iostream>
using namespace std; 

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
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
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void deleteAlternateNodes(Node* &head){
    Node* curr_node=head;
    while(curr_node!=NULL && curr_node->next!=NULL ){
    Node* temp=curr_node->next;   
     curr_node->next=curr_node->next->next;
     free(temp);
      curr_node=curr_node->next;
    }
}

int main() {
    LinkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);
    li.insertAtTail(4);
    li.insertAtTail(5);

    li.display(); // To see the elements of the linked list
    deleteAlternateNodes(li.head);

    li.display(); // To see the elements of the linked list
    return 0;
}
