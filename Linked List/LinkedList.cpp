<<<<<<< HEAD
#include <iostream>
using namespace std;
#include "node.cpp"

node *takeInput()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
}

int main()
{
    node * head= takeInput();
    //  print (head);
    // statically linked list creation
    // node n1(1);
    // node *head = &n1;
    // node n2(2);
    // node n3(3);
    // node n4(4);
    // node n5(5);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    /*cout << head->data << endl;
    head = head->next;
    cout << head->data << endl;
    head = head->next;
    cout << head->data << endl;
    head = head->next;
    cout << head->data << endl;
    head = head->next;
    cout << head->data << endl;
    */
    print(head);
   // print(head);

    /*
    n1.next = &n2;
    cout << n1.data << " " << head->data << " " << n2.data << endl;

    Dynamicallly linked list creation 
    node *n3 = new node[10];
    node *head = n3;
    node *n4 = new node[20];
    n3->next = n4;
    */
=======
#include <iostream>
using namespace std;
#include "node.cpp"

node *takeInput()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
}

int main()
{
    node * head= takeInput();
    //  print (head);
    // statically linked list creation
    // node n1(1);
    // node *head = &n1;
    // node n2(2);
    // node n3(3);
    // node n4(4);
    // node n5(5);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    /*cout << head->data << endl;
    head = head->next;
    cout << head->data << endl;
    head = head->next;
    cout << head->data << endl;
    head = head->next;
    cout << head->data << endl;
    head = head->next;
    cout << head->data << endl;
    */
    print(head);
   // print(head);

    /*
    n1.next = &n2;
    cout << n1.data << " " << head->data << " " << n2.data << endl;

    Dynamicallly linked list creation 
    node *n3 = new node[10];
    node *head = n3;
    node *n4 = new node[20];
    n3->next = n4;
    */
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}