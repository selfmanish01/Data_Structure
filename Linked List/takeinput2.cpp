#include <iostream>
using namespace std;
  class node{
    public:
        int data;
        node *next;
        node(int data){
            this->data = data;
            next = NULL;
        }
  };
  node*takeInput2(){
      int data;
      cin >> data;
      node *head;
      node *tail;
      head = NULL;
      tail = NULL;
      while(data !=-1){
      node *newNode = new node(data);
         if(head==NULL){
             head = newNode;
             tail = newNode;

         }else{
             tail->next = newNode;
             tail = tail->next;
         }
         cin >> data;
      }
      return head;
    }

int main()
{
 
}