<<<<<<< HEAD
#include <iostream>
using namespace std;
// print elements of linked list
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(node *head)
{
    // node * temp= head ;
    while (head!= NULL)
    {
        cout << head ->data << " ";
        head = head->next;
    }
  
}
int main()
{

    node n1(1);
    node *head = &n1;
    node n2(2);
    // node * newnode = new node (1);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
    cout << '\n';
    print(head);
=======
#include <iostream>
using namespace std;
// print elements of linked list
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(node *head)
{
    // node * temp= head ;
    while (head!= NULL)
    {
        cout << head ->data << " ";
        head = head->next;
    }
  
}
int main()
{

    node n1(1);
    node *head = &n1;
    node n2(2);
    // node * newnode = new node (1);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
    cout << '\n';
    print(head);
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}