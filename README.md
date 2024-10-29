# Linked List Implementation in C++

This project demonstrates a simple implementation of a linked list in C++. It covers basic operations such as insertion, deletion, and displaying list contents, providing a foundational understanding of linked list data structures.

## Features

- **Create New Nodes**: Easily initialize nodes with data and add them to the list.
- **Insertion**:
  - Insert at the beginning
  - Insert at the end
  - Insert at a specific position (by index)
- **Deletion**:
  - Delete from the beginning
  - Delete from the end
  - Delete a node by value or position
- **Display List**: Traverse and display the contents of the list.

## Class Definitions

### Node

The `Node` class represents a single node in the linked list, containing:
- `data`: The value stored in the node.
- `key`: An optional integer key identifier (default is 0).
- `next`: A pointer to the next node in the list.

### Functions

- `Node* createNode(int data)`: Creates and returns a new node with the specified data.
- `void insertAtBegin(Node*& head, int data)`: Inserts a node at the start of the list.
- `void insertAtEnd(Node*& head, int data)`: Adds a node to the end of the list.
- `void insertAtPosition(Node*& head, int position, int data)`: Inserts a node at the specified position in the list.
- `void displayList(Node* head)`: Outputs the contents of the linked list.
- `void deleteAtBegin(Node*& head)`: Deletes the first node in the list.
- `void deleteAtEnd(Node*& head)`: Removes the last node from the list.
- `void deleteByValue(Node*& head, int value)`: Deletes a node by its value.

## Usage

1. Compile the program with a C++ compiler.
2. Run the executable to see linked list operations in action.

## Example

```cpp
Node* head = NULL;
insertAtEnd(head, 10);
insertAtEnd(head, 20);
insertAtBegin(head, 5);
displayList(head); // Output: 5 -> 10 -> 20 -> NULL
deleteAtBegin(head);
displayList(head); // Output: 10 -> 20 -> NULL
