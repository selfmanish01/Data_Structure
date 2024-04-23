#include <iostream>
// #include"nOde1.cpp"
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

int main()
{
    // statically create the node of LL and add them
    Node a(10);
    Node *head = &a;
    
    Node b(20);
    
   // a.next = &b;
   

    // dynamically
    Node *c = new Node(30);
    Node *head = c;
    Node *d = new Node(40);
    c->next = d;

}