#include <iostream>
using namespace std;
  class Node{
    public:
      int data;
      Node *next;
      Node(int data){
          this->data = data;
          next = nullptr;
      }
  };

Node *InsertNode(Node *head, int i, int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if(i==0){
        newNode->next = head;
        head = newNode;
        return head;
    }
    while(temp!=nullptr && count<i-1){
        temp = temp->next;
        count++;
    }
    if(temp!=nullptr){
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
}

int main()
{
    int i, data;
    cin >> i >> data;
    Node *head = InsertNode(head, i, data);
}