// Singly Linked list Implemetation and Operations

#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    
    public :
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtStart(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtMiddle(Node* &head, int val, int pos){
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=0; i<= pos-2; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

bool searchList(Node* head, int key){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void print(Node* head){
   Node* temp = head;
   while(temp !=  NULL){
       cout<<temp->data<<"->";
       temp = temp->next;
   }
   cout<<"NULL"<<endl;
}

void deleteAtStart(Node* &head){
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deleteNode(Node* &head, int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        Node* toDelete = head;
        delete toDelete;
    }
    Node* temp = head;
    
    while(temp->next->data != val){
        temp = temp->next;
    }
    
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    
    delete toDelete;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtStart(head, 4);
    insertAtMiddle(head, 6, 1);
    // searchList(head, 6);
    // deleteNode(head, 3);
    // deleteAtStart(head);
    print(head);
    return 0 ;
}
