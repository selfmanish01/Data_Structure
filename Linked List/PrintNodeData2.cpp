#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printIthNode(Node *head, int i)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {

        if (count == i)
        {
            cout << "Data at index " << i << ": " << temp->data << endl;
            return;
        }

        count++;
        temp = temp->next;
    }

    cout << "Invalid index!" << endl;
}

int main()
{

    Node *head = new Node{1, NULL};
    Node *second = new Node{2, NULL};
    Node *third = new Node{3, NULL};
    Node *fourth = new Node{4, NULL};
    Node *fifth = new Node{5, NULL};

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    int index;
    cout << "Enter the index of the node to print: ";
    cin >> index;

    printIthNode(head, index);

    
    return 0;
}
