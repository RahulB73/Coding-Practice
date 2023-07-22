// Implementation of Doubly Linked list Using C++

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void InsertAtHead(Node*& head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    n->next = head;
    head->prev = n;
    head = n;
}

void InsertAtTail(Node*& head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void Display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    Display(head);
    InsertAtHead(head, 5);
    Display(head);

    return 0;
}






















