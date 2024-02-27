#include <iostream>
using namespace std;
class Node{
    int data;
    Node *next;

 Node(int data){
     this->data = data;
     next = nullptr;
 }
 
 Node * ReverseLinkedList(Node*head){
     Node *prev = nullptr;
     Node *current = head;
     Node *next = nullptr;
     while ( current != nullptr){
         next = current->next;
         current->next = prev;
         prev = current;
         current = next;
     }
     head = prev;
     return head;

 }

};
int main(){

}