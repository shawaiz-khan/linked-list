# Single Linked List

This project implements a simple single linked list in C++. It includes basic operations such as insertion at the end, deletion from the end, and displaying the list.

## Features

- Create a new node
- Insert a node at the end of the list
- Delete a node from the end of the list
- Display the contents of the list

## Class Definitions

### Node

The `Node` class represents a single node in the linked list, containing:
- `data`: The value stored in the node.
- `key`: An integer key for the node (default is 0).
- `next`: A pointer to the next node in the list.

### Functions

- `Node* createNode(int data)`: Creates and returns a new node with the given data.
- `void insertAtEnd(Node*& head, int data)`: Inserts a new node with the specified data at the end of the list.
- `void displayList(Node* head)`: Displays the entire linked list.
- `void deleteAtEnd(Node*& head)`: Deletes the last node from the linked list.

## Usage

1. Compile the program using a C++ compiler.
2. Run the executable.
3. The program will demonstrate linked list operations.

## Example

```cpp
Node* head = NULL;
insertAtEnd(head, 10);
insertAtEnd(head, 20);
displayList(head); // Output: 10 -> 20 -> NULL
deleteAtEnd(head);
displayList(head); // Output: 10 -> NULL
```

## Contributing

Feel free to contribute by creating issues or pull requests. Your feedback is welcome!