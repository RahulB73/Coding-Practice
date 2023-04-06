// Doubly Linked list Implemetation and Operations

#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node* prev;
    
    public :
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    
     
    newNode->next = head;
    
    if(head != NULL){
        head->prev = newNode;
    }
    head = newNode;
    
}

void inserAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    
    if(head == NULL){
        insertAtHead(head, val);   // If node is not created
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
}

void print(Node* head){
    Node* temp = head;
    
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<"->"<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    inserAtTail(head, 1);
    inserAtTail(head, 2);
    inserAtTail(head, 3);
    inserAtTail(head, 4);
    insertAtHead(head, 8);
    print(head);
}

 
