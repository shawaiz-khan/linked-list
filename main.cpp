#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        int key = 0;
        Node* next;
};

Node* createNode(int data) {
    Node* newNode = NULL;
    newNode = new Node();

    newNode -> data = data;
    newNode -> next = NULL;

    return newNode;
}

void insertAtEnd(Node*& head, int data){
    Node* newNode = createNode(data);
    
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}

// Delete

void displayList(Node*& head) {
    Node* temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    cout << temp -> data;
}

int main() {
    Node* head;
    Node* one = NULL;
    
    one = new Node();
    one -> data = 10;
    one -> key = 0;
    one -> next = NULL;

    head = one;
    insertAtEnd(head, 20);

    // displayList(head);

    return 0;
}