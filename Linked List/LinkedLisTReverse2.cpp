#include <iostream>
using namespace std;
  struct Node{
      int data;
      Node *next;
      Node(int data){
          this->data = data;
          next = nullptr;
      }
// linked
    Node* reverseLL(Node*head){
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;
        while (current != nullptr){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        current = prev;
        return current;
    }  
  };
int main()
{
 
}