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
node *takeInput()
{
    int data;
    cin >> data;
    node *head = nullptr;
    while (data != -1)
    {
        node *newNode = new node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = takeInput();
    print(head);
}