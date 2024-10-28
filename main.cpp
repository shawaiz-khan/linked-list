#include <iostream>
using namespace std;

int key = 0;

class Node {
    public:
        int data;
        int key = key; // Will be using for Specific purpose (in later edit)
        Node* next;
};

int generateKey() {
    key++;
    return key;
}

Node* createNode(int data) {
    Node* newNode = NULL;
    newNode = new Node();
    int newKey = generateKey();

    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> key = newKey;

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
            cout << "|" << temp -> key << "|" << temp -> data << "|" << " -> ";
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

void deleteByKey(Node*& head) {
    int choice;
    cout << "Enter key: ";
    cin >> choice;

    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    if (head -> key == choice) {
        Node* temp = head;
        head = head -> next;
        delete temp;
        cout << "Deleted head node with key " << choice << endl;
        return;
    }

    Node* current = head;
    Node* previous = NULL;

    while (current != NULL && current -> key != choice) {
        previous = current;
        current = current -> next;
    }

    if (current == NULL) {
        cout << "Key not found." << endl;
        return;
    }

    previous -> next = current -> next;
    cout << "Deleted node with key " << choice << endl;
    delete current;
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
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    displayList(head);

    deleteByKey(head);
    displayList(head);

    return 0;
}