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

int LengthOfLL(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
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
        int n = LengthOfLL(head);
        cout << n << endl;
    }
    return 0;
}
