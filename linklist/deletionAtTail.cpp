#include<iostream>
using namespace std; 
class Node{
    public:
  int data;
  Node* next;
  Node(int val){
    data=val;
    next=NULL;
  }

};

Node* CreateLinkedList(int arr[],int index, int size){
    if(index==size)
    return NULL;

    Node* temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);
    return temp;
}

int main(){
    Node* Head;
    Head=NULL;
    int arr[]={2,4,6,1,7};
    Head=CreateLinkedList(arr,0,1);
Head=NULL;
// if(Head!=NULL){
//     Node *temp=Head;
//     Head=Head->next;
//     delete temp;
// }

if(Head!=NULL){


    if(Head->next==NULL){
        Node* temp=Head;
        delete temp;
        Head=NULL;
    }

    else{
        Node* curr =Head;
        Node* prev=NULL;

while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
prev->next=curr->next;
delete curr;
    }
    


}

}