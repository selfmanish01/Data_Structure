#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int NodeValue(Node *head, int pos)
{
    int count = 0;
    while (head != NULL)
    {
        if (count == pos)
        {
            return head->data;
        }
        count++;
        head = head->next;
    }
    return -1; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = nullptr;
        int data;
        cin >> data;
        Node *tail = nullptr;
        while (data != -1)
        {
            Node *newNode = new Node(data);
            if (head == nullptr)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = tail->next;
            }
            cin >> data;
        }
        int pos;
        cin >> pos;
        int n = NodeValue(head, pos);
        if (n != -1)
        {
            cout << n << endl;
        }
    }
    return 0;
}
