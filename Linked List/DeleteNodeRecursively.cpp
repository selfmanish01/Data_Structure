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
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

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

node *deletenoderr(node *head, int i)
{
    if (i < 0 || i > lengthofLL(head))
    {
        return head;
    }
    if (i == 0)
    {
        node *temp = head->next;
        delete head;
        return temp;
    }

    head->next = deletenoderr(head->next, i - 1);4
    return head;
}

int main()
{

    node *head = takeinput();

    int i;

    cin >> i;

    head = deletenoderr(head, i);
    print(head);
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
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

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

node *deletenoderr(node *head, int i)
{
    if (i < 0 || i > lengthofLL(head))
    {
        return head;
    }
    if (i == 0)
    {
        node *temp = head->next;
        delete head;
        return temp;
    }

    head->next = deletenoderr(head->next, i - 1);4
    return head;
}

int main()
{

    node *head = takeinput();

    int i;

    cin >> i;

    head = deletenoderr(head, i);
    print(head);
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}