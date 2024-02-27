<<<<<<< HEAD
#include <iostream>

// Define the structure of a node in the linked list
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse a linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextNode = nullptr;
    
    // Traverse through the list, reversing the pointers as we go
    while (curr != nullptr) {
        nextNode = curr->next; // Save the next node
        curr->next = prev; // Reverse the pointer
        prev = curr; // Move prev to the current node
        curr = nextNode; // Move curr to the saved next node
    }
    
    // At the end of the loop, prev will point to the new head of the reversed list
    return prev;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    std::cout << "Original list: ";
    printList(head);
    
    // Reversing the linked list
    head = reverseLinkedList(head);
    
    std::cout << "Reversed list: ";
    printList(head);
    
    return 0;
}
=======
#include <iostream>

// Define the structure of a node in the linked list
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse a linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextNode = nullptr;
    
    // Traverse through the list, reversing the pointers as we go
    while (curr != nullptr) {
        nextNode = curr->next; // Save the next node
        curr->next = prev; // Reverse the pointer
        prev = curr; // Move prev to the current node
        curr = nextNode; // Move curr to the saved next node
    }
    
    // At the end of the loop, prev will point to the new head of the reversed list
    return prev;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    std::cout << "Original list: ";
    printList(head);
    
    // Reversing the linked list
    head = reverseLinkedList(head);
    
    std::cout << "Reversed list: ";
    printList(head);
    
    return 0;
}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
