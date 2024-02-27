<<<<<<< HEAD
#include <iostream>
using namespace std;
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
node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

int lengthofLL(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return 1 + lengthofLL(head->next);
}

 void midpoint(node *head)
{
    int l = (lengthofLL(head) - 1) / 2;

    int count = 0;
    node *temp = head;

    while (temp != NULL)
    {

        if (count == l)
        {
            cout << "Data at mid-Point " << l << ": " << temp->data << endl;
            
        }

        count++;
        temp = temp->next;
    }
   
}
int main()
{
    node *head = takeinput();
     midpoint(head) ;
=======
#include <iostream>
using namespace std;
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
node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

int lengthofLL(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return 1 + lengthofLL(head->next);
}

 void midpoint(node *head)
{
    int l = (lengthofLL(head) - 1) / 2;

    int count = 0;
    node *temp = head;

    while (temp != NULL)
    {

        if (count == l)
        {
            cout << "Data at mid-Point " << l << ": " << temp->data << endl;
            
        }

        count++;
        temp = temp->next;
    }
   
}
int main()
{
    node *head = takeinput();
     midpoint(head) ;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}