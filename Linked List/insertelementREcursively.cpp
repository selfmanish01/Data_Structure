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

node *insertnode(node *head, int i, int data)
{
    if (i < 0 || i > lengthofLL(head))
    {
        return head;
    }

    if (i == 0)
    {
        node *newnode = new node(data);

        newnode->next = head;
        return newnode;
    }
    if (i == 1)
    {
        node *newnode = new node(data);
        newnode->next = head->next;
        head->next = newnode;
        return head;
    }

    node *temp = insertnode(head->next, i - 1, data);
    return head;
}
int main()
{
    node *head = takeinput();

    int i;
    int data;
    cin >> i >> data;

    head = insertnode(head, i, data);
    print(head);
}