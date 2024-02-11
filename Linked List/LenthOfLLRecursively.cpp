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

int lengthofLL(node *head)
{
    if (head == NULL){
        return 0;
    }
    return 1 + lengthofLL(head->next);
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




int main()
{
node * head = takeinput();
int l = lengthofLL(head);
cout << l<<endl;

}