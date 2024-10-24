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

void insertAtEnd(Node*& head, int data) {
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

void displayList(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
    } else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
}

void deleteAtEnd(Node*& head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
    } else if (head -> next == NULL) {
        delete head;
        head = NULL;
    } else {
        Node* temp = head;
        while (temp -> next -> next != NULL) {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
}

int main() {
    Node* head = NULL;
    Node* one = NULL;

    one = new Node();
    one -> data = 10;
    one -> key = 0;
    one -> next = NULL;

    head = one;

    insertAtEnd(head, 20);
    displayList(head);

    deleteAtEnd(head);
    displayList(head);

    insertAtEnd(head, 40);
    displayList(head);

    insertAtEnd(head, 50);
    displayList(head);
    
    deleteAtEnd(head);
    displayList(head);

    return 0;
}